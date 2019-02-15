/*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0.  If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Copyright 1997 - July 2008 CWI, August 2008 - 2019 MonetDB B.V.
*/

// This file was generated automatically with mal2h.py. Do not edit this file directly.
{ "pyapi3", "\nmodule pyapi3;\n\nunsafe pattern eval(fptr:ptr,expr:str):any\naddress PYAPI3PyAPIevalStd\ncomment \"Execute a simple Python script returning a single value\";\n\nunsafe pattern eval(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalStd\ncomment \"Execute a simple Python script value\";\n\nunsafe pattern subeval_aggr(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalAggr\ncomment \"grouped aggregates through Python\";\n\nunsafe pattern eval_aggr(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalAggr\ncomment \"grouped aggregates through Python\";\n\nunsafe pattern eval_loader(fptr:ptr,expr:str):any...\naddress PYAPI3PyAPIevalLoader\ncomment \"loader functions through Python\";\n\nunsafe pattern eval_loader(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalLoader\ncomment \"loader functions through Python\";\n\ncommand prelude() :void address PYAPI3PyAPIprelude;\npyapi3.prelude();\n\nmodule batpyapi3;\n\nunsafe pattern eval(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalStd\ncomment \"Execute a simple Python script value\";\n\nunsafe pattern subeval_aggr(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalAggr\ncomment \"grouped aggregates through Python\";\n\nunsafe pattern eval_aggr(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalAggr\ncomment \"grouped aggregates through Python\";\n\nunsafe pattern eval_loader(fptr:ptr,expr:str):any...\naddress PYAPI3PyAPIevalLoader\ncomment \"loader functions through Python\";\n\nunsafe pattern eval_loader(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalLoader\ncomment \"loader functions through Python\";\n\nmodule pyapi3map;\n\npattern eval(fptr:ptr,expr:str):any\naddress PYAPI3PyAPIevalStdMap\ncomment \"Execute a simple Python script returning a single value\";\n\npattern eval(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalStdMap\ncomment \"Execute a simple Python script value\";\n\npattern subeval_aggr(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalAggrMap\ncomment \"grouped aggregates through Python\";\n\npattern eval_aggr(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalAggrMap\ncomment \"grouped aggregates through Python\";\n\nmodule batpyapi3map;\n\npattern eval(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalStdMap\ncomment \"Execute a simple Python script value\";\n\npattern subeval_aggr(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalAggrMap\ncomment \"grouped aggregates through Python\";\n\npattern eval_aggr(fptr:ptr,expr:str,arg:any...):any...\naddress PYAPI3PyAPIevalAggrMap\ncomment \"grouped aggregates through Python\";" }, 
