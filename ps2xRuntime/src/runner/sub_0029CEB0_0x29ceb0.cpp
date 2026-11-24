#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CEB0
// Address: 0x29ceb0 - 0x29d034
void sub_0029CEB0_0x29ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CEB0_0x29ceb0");
#endif

    switch (ctx->pc) {
        case 0x29ceb0u: goto label_29ceb0;
        case 0x29ceb4u: goto label_29ceb4;
        case 0x29ceb8u: goto label_29ceb8;
        case 0x29cebcu: goto label_29cebc;
        case 0x29cec0u: goto label_29cec0;
        case 0x29cec4u: goto label_29cec4;
        case 0x29cec8u: goto label_29cec8;
        case 0x29ceccu: goto label_29cecc;
        case 0x29ced0u: goto label_29ced0;
        case 0x29ced4u: goto label_29ced4;
        case 0x29ced8u: goto label_29ced8;
        case 0x29cedcu: goto label_29cedc;
        case 0x29cee0u: goto label_29cee0;
        case 0x29cee4u: goto label_29cee4;
        case 0x29cee8u: goto label_29cee8;
        case 0x29ceecu: goto label_29ceec;
        case 0x29cef0u: goto label_29cef0;
        case 0x29cef4u: goto label_29cef4;
        case 0x29cef8u: goto label_29cef8;
        case 0x29cefcu: goto label_29cefc;
        case 0x29cf00u: goto label_29cf00;
        case 0x29cf04u: goto label_29cf04;
        case 0x29cf08u: goto label_29cf08;
        case 0x29cf0cu: goto label_29cf0c;
        case 0x29cf10u: goto label_29cf10;
        case 0x29cf14u: goto label_29cf14;
        case 0x29cf18u: goto label_29cf18;
        case 0x29cf1cu: goto label_29cf1c;
        case 0x29cf20u: goto label_29cf20;
        case 0x29cf24u: goto label_29cf24;
        case 0x29cf28u: goto label_29cf28;
        case 0x29cf2cu: goto label_29cf2c;
        case 0x29cf30u: goto label_29cf30;
        case 0x29cf34u: goto label_29cf34;
        case 0x29cf38u: goto label_29cf38;
        case 0x29cf3cu: goto label_29cf3c;
        case 0x29cf40u: goto label_29cf40;
        case 0x29cf44u: goto label_29cf44;
        case 0x29cf48u: goto label_29cf48;
        case 0x29cf4cu: goto label_29cf4c;
        case 0x29cf50u: goto label_29cf50;
        case 0x29cf54u: goto label_29cf54;
        case 0x29cf58u: goto label_29cf58;
        case 0x29cf5cu: goto label_29cf5c;
        case 0x29cf60u: goto label_29cf60;
        case 0x29cf64u: goto label_29cf64;
        case 0x29cf68u: goto label_29cf68;
        case 0x29cf6cu: goto label_29cf6c;
        case 0x29cf70u: goto label_29cf70;
        case 0x29cf74u: goto label_29cf74;
        case 0x29cf78u: goto label_29cf78;
        case 0x29cf7cu: goto label_29cf7c;
        case 0x29cf80u: goto label_29cf80;
        case 0x29cf84u: goto label_29cf84;
        case 0x29cf88u: goto label_29cf88;
        case 0x29cf8cu: goto label_29cf8c;
        case 0x29cf90u: goto label_29cf90;
        case 0x29cf94u: goto label_29cf94;
        case 0x29cf98u: goto label_29cf98;
        case 0x29cf9cu: goto label_29cf9c;
        case 0x29cfa0u: goto label_29cfa0;
        case 0x29cfa4u: goto label_29cfa4;
        case 0x29cfa8u: goto label_29cfa8;
        case 0x29cfacu: goto label_29cfac;
        case 0x29cfb0u: goto label_29cfb0;
        case 0x29cfb4u: goto label_29cfb4;
        case 0x29cfb8u: goto label_29cfb8;
        case 0x29cfbcu: goto label_29cfbc;
        case 0x29cfc0u: goto label_29cfc0;
        case 0x29cfc4u: goto label_29cfc4;
        case 0x29cfc8u: goto label_29cfc8;
        case 0x29cfccu: goto label_29cfcc;
        case 0x29cfd0u: goto label_29cfd0;
        case 0x29cfd4u: goto label_29cfd4;
        case 0x29cfd8u: goto label_29cfd8;
        case 0x29cfdcu: goto label_29cfdc;
        case 0x29cfe0u: goto label_29cfe0;
        case 0x29cfe4u: goto label_29cfe4;
        case 0x29cfe8u: goto label_29cfe8;
        case 0x29cfecu: goto label_29cfec;
        case 0x29cff0u: goto label_29cff0;
        case 0x29cff4u: goto label_29cff4;
        case 0x29cff8u: goto label_29cff8;
        case 0x29cffcu: goto label_29cffc;
        case 0x29d000u: goto label_29d000;
        case 0x29d004u: goto label_29d004;
        case 0x29d008u: goto label_29d008;
        case 0x29d00cu: goto label_29d00c;
        case 0x29d010u: goto label_29d010;
        case 0x29d014u: goto label_29d014;
        case 0x29d018u: goto label_29d018;
        case 0x29d01cu: goto label_29d01c;
        case 0x29d020u: goto label_29d020;
        case 0x29d024u: goto label_29d024;
        case 0x29d028u: goto label_29d028;
        case 0x29d02cu: goto label_29d02c;
        case 0x29d030u: goto label_29d030;
        default: break;
    }

    ctx->pc = 0x29ceb0u;

label_29ceb0:
    // 0x29ceb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29ceb4:
    // 0x29ceb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29ceb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29ceb8:
    // 0x29ceb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29cebc:
    // 0x29cebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29cec0:
    // 0x29cec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29cec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29cec4:
    // 0x29cec4: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x29cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_29cec8:
    // 0x29cec8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x29cec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_29cecc:
    // 0x29cecc: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_29ced0:
    if (ctx->pc == 0x29CED0u) {
        ctx->pc = 0x29CED4u;
        goto label_29ced4;
    }
    ctx->pc = 0x29CECCu;
    {
        const bool branch_taken_0x29cecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cecc) {
            ctx->pc = 0x29CFE0u;
            goto label_29cfe0;
        }
    }
    ctx->pc = 0x29CED4u;
label_29ced4:
    // 0x29ced4: 0x0  nop
    ctx->pc = 0x29ced4u;
    // NOP
label_29ced8:
    // 0x29ced8: 0x9083000b  lbu         $v1, 0xB($a0)
    ctx->pc = 0x29ced8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
label_29cedc:
    // 0x29cedc: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_29cee0:
    if (ctx->pc == 0x29CEE0u) {
        ctx->pc = 0x29CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEDCu;
        // 0x29cee0: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CEE4u;
        goto label_29cee4;
    }
    ctx->pc = 0x29CEDCu;
    {
        const bool branch_taken_0x29cedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEDCu;
        // 0x29cee0: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cedc) {
            ctx->pc = 0x29CF88u;
            goto label_29cf88;
        }
    }
    ctx->pc = 0x29CEE4u;
label_29cee4:
    // 0x29cee4: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x29cee4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_29cee8:
    // 0x29cee8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_29ceec:
    // 0x29ceec: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_29cef0:
    if (ctx->pc == 0x29CEF0u) {
        ctx->pc = 0x29CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEECu;
        // 0x29cef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CEF4u;
        goto label_29cef4;
    }
    ctx->pc = 0x29CEECu;
    {
        const bool branch_taken_0x29ceec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x29CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEECu;
        // 0x29cef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ceec) {
            ctx->pc = 0x29CF50u;
            goto label_29cf50;
        }
    }
    ctx->pc = 0x29CEF4u;
label_29cef4:
    // 0x29cef4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29cef8:
    // 0x29cef8: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
label_29cefc:
    if (ctx->pc == 0x29CEFCu) {
        ctx->pc = 0x29CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEF8u;
        // 0x29cefc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF00u;
        goto label_29cf00;
    }
    ctx->pc = 0x29CEF8u;
    {
        const bool branch_taken_0x29cef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x29CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEF8u;
        // 0x29cefc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cef8) {
            ctx->pc = 0x29CF30u;
            goto label_29cf30;
        }
    }
    ctx->pc = 0x29CF00u;
label_29cf00:
    // 0x29cf00: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_29cf04:
    if (ctx->pc == 0x29CF04u) {
        ctx->pc = 0x29CF08u;
        goto label_29cf08;
    }
    ctx->pc = 0x29CF00u;
    {
        const bool branch_taken_0x29cf00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cf00) {
            ctx->pc = 0x29CF10u;
            goto label_29cf10;
        }
    }
    ctx->pc = 0x29CF08u;
label_29cf08:
    // 0x29cf08: 0x10000019  b           . + 4 + (0x19 << 2)
label_29cf0c:
    if (ctx->pc == 0x29CF0Cu) {
        ctx->pc = 0x29CF10u;
        goto label_29cf10;
    }
    ctx->pc = 0x29CF08u;
    {
        const bool branch_taken_0x29cf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf08) {
            ctx->pc = 0x29CF70u;
            goto label_29cf70;
        }
    }
    ctx->pc = 0x29CF10u;
label_29cf10:
    // 0x29cf10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29cf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_29cf14:
    // 0x29cf14: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x29cf14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_29cf18:
    // 0x29cf18: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x29cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_29cf1c:
    // 0x29cf1c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x29cf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_29cf20:
    // 0x29cf20: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_29cf24:
    if (ctx->pc == 0x29CF24u) {
        ctx->pc = 0x29CF28u;
        goto label_29cf28;
    }
    ctx->pc = 0x29CF20u;
    {
        const bool branch_taken_0x29cf20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf20) {
            ctx->pc = 0x29CF70u;
            goto label_29cf70;
        }
    }
    ctx->pc = 0x29CF28u;
label_29cf28:
    // 0x29cf28: 0x10000011  b           . + 4 + (0x11 << 2)
label_29cf2c:
    if (ctx->pc == 0x29CF2Cu) {
        ctx->pc = 0x29CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF28u;
        // 0x29cf2c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF30u;
        goto label_29cf30;
    }
    ctx->pc = 0x29CF28u;
    {
        const bool branch_taken_0x29cf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF28u;
        // 0x29cf2c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf28) {
            ctx->pc = 0x29CF70u;
            goto label_29cf70;
        }
    }
    ctx->pc = 0x29CF30u;
label_29cf30:
    // 0x29cf30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29cf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_29cf34:
    // 0x29cf34: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x29cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_29cf38:
    // 0x29cf38: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x29cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_29cf3c:
    // 0x29cf3c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x29cf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_29cf40:
    // 0x29cf40: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_29cf44:
    if (ctx->pc == 0x29CF44u) {
        ctx->pc = 0x29CF48u;
        goto label_29cf48;
    }
    ctx->pc = 0x29CF40u;
    {
        const bool branch_taken_0x29cf40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf40) {
            ctx->pc = 0x29CF70u;
            goto label_29cf70;
        }
    }
    ctx->pc = 0x29CF48u;
label_29cf48:
    // 0x29cf48: 0x10000009  b           . + 4 + (0x9 << 2)
label_29cf4c:
    if (ctx->pc == 0x29CF4Cu) {
        ctx->pc = 0x29CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF48u;
        // 0x29cf4c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF50u;
        goto label_29cf50;
    }
    ctx->pc = 0x29CF48u;
    {
        const bool branch_taken_0x29cf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF48u;
        // 0x29cf4c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf48) {
            ctx->pc = 0x29CF70u;
            goto label_29cf70;
        }
    }
    ctx->pc = 0x29CF50u;
label_29cf50:
    // 0x29cf50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29cf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_29cf54:
    // 0x29cf54: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x29cf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_29cf58:
    // 0x29cf58: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x29cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_29cf5c:
    // 0x29cf5c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x29cf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_29cf60:
    // 0x29cf60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_29cf64:
    if (ctx->pc == 0x29CF64u) {
        ctx->pc = 0x29CF68u;
        goto label_29cf68;
    }
    ctx->pc = 0x29CF60u;
    {
        const bool branch_taken_0x29cf60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf60) {
            ctx->pc = 0x29CF70u;
            goto label_29cf70;
        }
    }
    ctx->pc = 0x29CF68u;
label_29cf68:
    // 0x29cf68: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x29cf68u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_29cf6c:
    // 0x29cf6c: 0x0  nop
    ctx->pc = 0x29cf6cu;
    // NOP
label_29cf70:
    // 0x29cf70: 0x14c00017  bnez        $a2, . + 4 + (0x17 << 2)
label_29cf74:
    if (ctx->pc == 0x29CF74u) {
        ctx->pc = 0x29CF78u;
        goto label_29cf78;
    }
    ctx->pc = 0x29CF70u;
    {
        const bool branch_taken_0x29cf70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x29cf70) {
            ctx->pc = 0x29CFD0u;
            goto label_29cfd0;
        }
    }
    ctx->pc = 0x29CF78u;
label_29cf78:
    // 0x29cf78: 0x9083000b  lbu         $v1, 0xB($a0)
    ctx->pc = 0x29cf78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
label_29cf7c:
    // 0x29cf7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29cf80:
    // 0x29cf80: 0x10000013  b           . + 4 + (0x13 << 2)
label_29cf84:
    if (ctx->pc == 0x29CF84u) {
        ctx->pc = 0x29CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF80u;
        // 0x29cf84: 0xa083000b  sb          $v1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF88u;
        goto label_29cf88;
    }
    ctx->pc = 0x29CF80u;
    {
        const bool branch_taken_0x29cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF80u;
        // 0x29cf84: 0xa083000b  sb          $v1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf80) {
            ctx->pc = 0x29CFD0u;
            goto label_29cfd0;
        }
    }
    ctx->pc = 0x29CF88u;
label_29cf88:
    // 0x29cf88: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x29cf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_29cf8c:
    // 0x29cf8c: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x29cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_29cf90:
    // 0x29cf90: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x29cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
label_29cf94:
    // 0x29cf94: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x29cf94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_29cf98:
    // 0x29cf98: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x29cf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_29cf9c:
    // 0x29cf9c: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x29cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
label_29cfa0:
    // 0x29cfa0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x29cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_29cfa4:
    // 0x29cfa4: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x29cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_29cfa8:
    // 0x29cfa8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x29cfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_29cfac:
    // 0x29cfac: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x29cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_29cfb0:
    // 0x29cfb0: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x29cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_29cfb4:
    // 0x29cfb4: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x29cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
label_29cfb8:
    // 0x29cfb8: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x29cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_29cfbc:
    // 0x29cfbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_29cfc0:
    if (ctx->pc == 0x29CFC0u) {
        ctx->pc = 0x29CFC4u;
        goto label_29cfc4;
    }
    ctx->pc = 0x29CFBCu;
    {
        const bool branch_taken_0x29cfbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cfbc) {
            ctx->pc = 0x29CFD0u;
            goto label_29cfd0;
        }
    }
    ctx->pc = 0x29CFC4u;
label_29cfc4:
    // 0x29cfc4: 0x60f809  jalr        $v1
label_29cfc8:
    if (ctx->pc == 0x29CFC8u) {
        ctx->pc = 0x29CFCCu;
        goto label_29cfcc;
    }
    ctx->pc = 0x29CFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29CFCCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CFC4u, 0x29CFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CFCCu;
label_29cfcc:
    // 0x29cfcc: 0x0  nop
    ctx->pc = 0x29cfccu;
    // NOP
label_29cfd0:
    // 0x29cfd0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29cfd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_29cfd4:
    // 0x29cfd4: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_29cfd8:
    if (ctx->pc == 0x29CFD8u) {
        ctx->pc = 0x29CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFD4u;
        // 0x29cfd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFDCu;
        goto label_29cfdc;
    }
    ctx->pc = 0x29CFD4u;
    {
        const bool branch_taken_0x29cfd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFD4u;
        // 0x29cfd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfd4) {
            ctx->pc = 0x29CED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ced8;
        }
    }
    ctx->pc = 0x29CFDCu;
label_29cfdc:
    // 0x29cfdc: 0x0  nop
    ctx->pc = 0x29cfdcu;
    // NOP
label_29cfe0:
    // 0x29cfe0: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x29cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_29cfe4:
    // 0x29cfe4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_29cfe8:
    if (ctx->pc == 0x29CFE8u) {
        ctx->pc = 0x29CFECu;
        goto label_29cfec;
    }
    ctx->pc = 0x29CFE4u;
    {
        const bool branch_taken_0x29cfe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cfe4) {
            ctx->pc = 0x29D020u;
            goto label_29d020;
        }
    }
    ctx->pc = 0x29CFECu;
label_29cfec:
    // 0x29cfec: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x29cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_29cff0:
    // 0x29cff0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x29cff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_29cff4:
    // 0x29cff4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_29cff8:
    if (ctx->pc == 0x29CFF8u) {
        ctx->pc = 0x29CFFCu;
        goto label_29cffc;
    }
    ctx->pc = 0x29CFF4u;
    {
        const bool branch_taken_0x29cff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cff4) {
            ctx->pc = 0x29D020u;
            goto label_29d020;
        }
    }
    ctx->pc = 0x29CFFCu;
label_29cffc:
    // 0x29cffc: 0x0  nop
    ctx->pc = 0x29cffcu;
    // NOP
label_29d000:
    // 0x29d000: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x29d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_29d004:
    // 0x29d004: 0x40f809  jalr        $v0
label_29d008:
    if (ctx->pc == 0x29D008u) {
        ctx->pc = 0x29D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D004u;
        // 0x29d008: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D00Cu;
        goto label_29d00c;
    }
    ctx->pc = 0x29D004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D00Cu);
        ctx->pc = 0x29D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D004u;
        // 0x29d008: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D004u, 0x29D00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D00Cu;
label_29d00c:
    // 0x29d00c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29d00cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_29d010:
    // 0x29d010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d014:
    // 0x29d014: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_29d018:
    if (ctx->pc == 0x29D018u) {
        ctx->pc = 0x29D01Cu;
        goto label_29d01c;
    }
    ctx->pc = 0x29D014u;
    {
        const bool branch_taken_0x29d014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d014) {
            ctx->pc = 0x29D000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d000;
        }
    }
    ctx->pc = 0x29D01Cu;
label_29d01c:
    // 0x29d01c: 0x0  nop
    ctx->pc = 0x29d01cu;
    // NOP
label_29d020:
    // 0x29d020: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29d024:
    // 0x29d024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d028:
    // 0x29d028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d02c:
    // 0x29d02c: 0x3e00008  jr          $ra
label_29d030:
    if (ctx->pc == 0x29D030u) {
        ctx->pc = 0x29D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D02Cu;
        // 0x29d030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D034u;
        goto label_fallthrough_0x29d02c;
    }
    ctx->pc = 0x29D02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D02Cu;
        // 0x29d030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d02c:
    ctx->pc = 0x29D034u;
}
