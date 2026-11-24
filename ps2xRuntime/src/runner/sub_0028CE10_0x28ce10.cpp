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

// Function: sub_0028CE10
// Address: 0x28ce10 - 0x28d17c
void sub_0028CE10_0x28ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CE10_0x28ce10");
#endif

    switch (ctx->pc) {
        case 0x28ce10u: goto label_28ce10;
        case 0x28ce14u: goto label_28ce14;
        case 0x28ce18u: goto label_28ce18;
        case 0x28ce1cu: goto label_28ce1c;
        case 0x28ce20u: goto label_28ce20;
        case 0x28ce24u: goto label_28ce24;
        case 0x28ce28u: goto label_28ce28;
        case 0x28ce2cu: goto label_28ce2c;
        case 0x28ce30u: goto label_28ce30;
        case 0x28ce34u: goto label_28ce34;
        case 0x28ce38u: goto label_28ce38;
        case 0x28ce3cu: goto label_28ce3c;
        case 0x28ce40u: goto label_28ce40;
        case 0x28ce44u: goto label_28ce44;
        case 0x28ce48u: goto label_28ce48;
        case 0x28ce4cu: goto label_28ce4c;
        case 0x28ce50u: goto label_28ce50;
        case 0x28ce54u: goto label_28ce54;
        case 0x28ce58u: goto label_28ce58;
        case 0x28ce5cu: goto label_28ce5c;
        case 0x28ce60u: goto label_28ce60;
        case 0x28ce64u: goto label_28ce64;
        case 0x28ce68u: goto label_28ce68;
        case 0x28ce6cu: goto label_28ce6c;
        case 0x28ce70u: goto label_28ce70;
        case 0x28ce74u: goto label_28ce74;
        case 0x28ce78u: goto label_28ce78;
        case 0x28ce7cu: goto label_28ce7c;
        case 0x28ce80u: goto label_28ce80;
        case 0x28ce84u: goto label_28ce84;
        case 0x28ce88u: goto label_28ce88;
        case 0x28ce8cu: goto label_28ce8c;
        case 0x28ce90u: goto label_28ce90;
        case 0x28ce94u: goto label_28ce94;
        case 0x28ce98u: goto label_28ce98;
        case 0x28ce9cu: goto label_28ce9c;
        case 0x28cea0u: goto label_28cea0;
        case 0x28cea4u: goto label_28cea4;
        case 0x28cea8u: goto label_28cea8;
        case 0x28ceacu: goto label_28ceac;
        case 0x28ceb0u: goto label_28ceb0;
        case 0x28ceb4u: goto label_28ceb4;
        case 0x28ceb8u: goto label_28ceb8;
        case 0x28cebcu: goto label_28cebc;
        case 0x28cec0u: goto label_28cec0;
        case 0x28cec4u: goto label_28cec4;
        case 0x28cec8u: goto label_28cec8;
        case 0x28ceccu: goto label_28cecc;
        case 0x28ced0u: goto label_28ced0;
        case 0x28ced4u: goto label_28ced4;
        case 0x28ced8u: goto label_28ced8;
        case 0x28cedcu: goto label_28cedc;
        case 0x28cee0u: goto label_28cee0;
        case 0x28cee4u: goto label_28cee4;
        case 0x28cee8u: goto label_28cee8;
        case 0x28ceecu: goto label_28ceec;
        case 0x28cef0u: goto label_28cef0;
        case 0x28cef4u: goto label_28cef4;
        case 0x28cef8u: goto label_28cef8;
        case 0x28cefcu: goto label_28cefc;
        case 0x28cf00u: goto label_28cf00;
        case 0x28cf04u: goto label_28cf04;
        case 0x28cf08u: goto label_28cf08;
        case 0x28cf0cu: goto label_28cf0c;
        case 0x28cf10u: goto label_28cf10;
        case 0x28cf14u: goto label_28cf14;
        case 0x28cf18u: goto label_28cf18;
        case 0x28cf1cu: goto label_28cf1c;
        case 0x28cf20u: goto label_28cf20;
        case 0x28cf24u: goto label_28cf24;
        case 0x28cf28u: goto label_28cf28;
        case 0x28cf2cu: goto label_28cf2c;
        case 0x28cf30u: goto label_28cf30;
        case 0x28cf34u: goto label_28cf34;
        case 0x28cf38u: goto label_28cf38;
        case 0x28cf3cu: goto label_28cf3c;
        case 0x28cf40u: goto label_28cf40;
        case 0x28cf44u: goto label_28cf44;
        case 0x28cf48u: goto label_28cf48;
        case 0x28cf4cu: goto label_28cf4c;
        case 0x28cf50u: goto label_28cf50;
        case 0x28cf54u: goto label_28cf54;
        case 0x28cf58u: goto label_28cf58;
        case 0x28cf5cu: goto label_28cf5c;
        case 0x28cf60u: goto label_28cf60;
        case 0x28cf64u: goto label_28cf64;
        case 0x28cf68u: goto label_28cf68;
        case 0x28cf6cu: goto label_28cf6c;
        case 0x28cf70u: goto label_28cf70;
        case 0x28cf74u: goto label_28cf74;
        case 0x28cf78u: goto label_28cf78;
        case 0x28cf7cu: goto label_28cf7c;
        case 0x28cf80u: goto label_28cf80;
        case 0x28cf84u: goto label_28cf84;
        case 0x28cf88u: goto label_28cf88;
        case 0x28cf8cu: goto label_28cf8c;
        case 0x28cf90u: goto label_28cf90;
        case 0x28cf94u: goto label_28cf94;
        case 0x28cf98u: goto label_28cf98;
        case 0x28cf9cu: goto label_28cf9c;
        case 0x28cfa0u: goto label_28cfa0;
        case 0x28cfa4u: goto label_28cfa4;
        case 0x28cfa8u: goto label_28cfa8;
        case 0x28cfacu: goto label_28cfac;
        case 0x28cfb0u: goto label_28cfb0;
        case 0x28cfb4u: goto label_28cfb4;
        case 0x28cfb8u: goto label_28cfb8;
        case 0x28cfbcu: goto label_28cfbc;
        case 0x28cfc0u: goto label_28cfc0;
        case 0x28cfc4u: goto label_28cfc4;
        case 0x28cfc8u: goto label_28cfc8;
        case 0x28cfccu: goto label_28cfcc;
        case 0x28cfd0u: goto label_28cfd0;
        case 0x28cfd4u: goto label_28cfd4;
        case 0x28cfd8u: goto label_28cfd8;
        case 0x28cfdcu: goto label_28cfdc;
        case 0x28cfe0u: goto label_28cfe0;
        case 0x28cfe4u: goto label_28cfe4;
        case 0x28cfe8u: goto label_28cfe8;
        case 0x28cfecu: goto label_28cfec;
        case 0x28cff0u: goto label_28cff0;
        case 0x28cff4u: goto label_28cff4;
        case 0x28cff8u: goto label_28cff8;
        case 0x28cffcu: goto label_28cffc;
        case 0x28d000u: goto label_28d000;
        case 0x28d004u: goto label_28d004;
        case 0x28d008u: goto label_28d008;
        case 0x28d00cu: goto label_28d00c;
        case 0x28d010u: goto label_28d010;
        case 0x28d014u: goto label_28d014;
        case 0x28d018u: goto label_28d018;
        case 0x28d01cu: goto label_28d01c;
        case 0x28d020u: goto label_28d020;
        case 0x28d024u: goto label_28d024;
        case 0x28d028u: goto label_28d028;
        case 0x28d02cu: goto label_28d02c;
        case 0x28d030u: goto label_28d030;
        case 0x28d034u: goto label_28d034;
        case 0x28d038u: goto label_28d038;
        case 0x28d03cu: goto label_28d03c;
        case 0x28d040u: goto label_28d040;
        case 0x28d044u: goto label_28d044;
        case 0x28d048u: goto label_28d048;
        case 0x28d04cu: goto label_28d04c;
        case 0x28d050u: goto label_28d050;
        case 0x28d054u: goto label_28d054;
        case 0x28d058u: goto label_28d058;
        case 0x28d05cu: goto label_28d05c;
        case 0x28d060u: goto label_28d060;
        case 0x28d064u: goto label_28d064;
        case 0x28d068u: goto label_28d068;
        case 0x28d06cu: goto label_28d06c;
        case 0x28d070u: goto label_28d070;
        case 0x28d074u: goto label_28d074;
        case 0x28d078u: goto label_28d078;
        case 0x28d07cu: goto label_28d07c;
        case 0x28d080u: goto label_28d080;
        case 0x28d084u: goto label_28d084;
        case 0x28d088u: goto label_28d088;
        case 0x28d08cu: goto label_28d08c;
        case 0x28d090u: goto label_28d090;
        case 0x28d094u: goto label_28d094;
        case 0x28d098u: goto label_28d098;
        case 0x28d09cu: goto label_28d09c;
        case 0x28d0a0u: goto label_28d0a0;
        case 0x28d0a4u: goto label_28d0a4;
        case 0x28d0a8u: goto label_28d0a8;
        case 0x28d0acu: goto label_28d0ac;
        case 0x28d0b0u: goto label_28d0b0;
        case 0x28d0b4u: goto label_28d0b4;
        case 0x28d0b8u: goto label_28d0b8;
        case 0x28d0bcu: goto label_28d0bc;
        case 0x28d0c0u: goto label_28d0c0;
        case 0x28d0c4u: goto label_28d0c4;
        case 0x28d0c8u: goto label_28d0c8;
        case 0x28d0ccu: goto label_28d0cc;
        case 0x28d0d0u: goto label_28d0d0;
        case 0x28d0d4u: goto label_28d0d4;
        case 0x28d0d8u: goto label_28d0d8;
        case 0x28d0dcu: goto label_28d0dc;
        case 0x28d0e0u: goto label_28d0e0;
        case 0x28d0e4u: goto label_28d0e4;
        case 0x28d0e8u: goto label_28d0e8;
        case 0x28d0ecu: goto label_28d0ec;
        case 0x28d0f0u: goto label_28d0f0;
        case 0x28d0f4u: goto label_28d0f4;
        case 0x28d0f8u: goto label_28d0f8;
        case 0x28d0fcu: goto label_28d0fc;
        case 0x28d100u: goto label_28d100;
        case 0x28d104u: goto label_28d104;
        case 0x28d108u: goto label_28d108;
        case 0x28d10cu: goto label_28d10c;
        case 0x28d110u: goto label_28d110;
        case 0x28d114u: goto label_28d114;
        case 0x28d118u: goto label_28d118;
        case 0x28d11cu: goto label_28d11c;
        case 0x28d120u: goto label_28d120;
        case 0x28d124u: goto label_28d124;
        case 0x28d128u: goto label_28d128;
        case 0x28d12cu: goto label_28d12c;
        case 0x28d130u: goto label_28d130;
        case 0x28d134u: goto label_28d134;
        case 0x28d138u: goto label_28d138;
        case 0x28d13cu: goto label_28d13c;
        case 0x28d140u: goto label_28d140;
        case 0x28d144u: goto label_28d144;
        case 0x28d148u: goto label_28d148;
        case 0x28d14cu: goto label_28d14c;
        case 0x28d150u: goto label_28d150;
        case 0x28d154u: goto label_28d154;
        case 0x28d158u: goto label_28d158;
        case 0x28d15cu: goto label_28d15c;
        case 0x28d160u: goto label_28d160;
        case 0x28d164u: goto label_28d164;
        case 0x28d168u: goto label_28d168;
        case 0x28d16cu: goto label_28d16c;
        case 0x28d170u: goto label_28d170;
        case 0x28d174u: goto label_28d174;
        case 0x28d178u: goto label_28d178;
        default: break;
    }

    ctx->pc = 0x28ce10u;

label_28ce10:
    // 0x28ce10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28ce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_28ce14:
    // 0x28ce14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_28ce18:
    // 0x28ce18: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_28ce1c:
    // 0x28ce1c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_28ce20:
    // 0x28ce20: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x28ce20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28ce24:
    // 0x28ce24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28ce24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28ce28:
    // 0x28ce28: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x28ce28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28ce2c:
    // 0x28ce2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28ce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28ce30:
    // 0x28ce30: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28ce30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28ce34:
    // 0x28ce34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28ce34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28ce38:
    // 0x28ce38: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28ce38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28ce3c:
    // 0x28ce3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28ce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28ce40:
    // 0x28ce40: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28ce44:
    // 0x28ce44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ce44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28ce48:
    // 0x28ce48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28ce4c:
    // 0x28ce4c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x28ce4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28ce50:
    // 0x28ce50: 0xc09d4d4  jal         func_275350
label_28ce54:
    if (ctx->pc == 0x28CE54u) {
        ctx->pc = 0x28CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE50u;
        // 0x28ce54: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE58u;
        goto label_28ce58;
    }
    ctx->pc = 0x28CE50u;
    SET_GPR_U32(ctx, 31, 0x28CE58u);
    ctx->pc = 0x28CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE50u;
    // 0x28ce54: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x28CE50u, 0x28CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE58u;
label_28ce58:
    // 0x28ce58: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_28ce5c:
    if (ctx->pc == 0x28CE5Cu) {
        ctx->pc = 0x28CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE58u;
        // 0x28ce5c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE60u;
        goto label_28ce60;
    }
    ctx->pc = 0x28CE58u;
    {
        const bool branch_taken_0x28ce58 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE58u;
        // 0x28ce5c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce58) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CE60u;
label_28ce60:
    // 0x28ce60: 0xc09d4d8  jal         func_275360
label_28ce64:
    if (ctx->pc == 0x28CE64u) {
        ctx->pc = 0x28CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE60u;
        // 0x28ce64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE68u;
        goto label_28ce68;
    }
    ctx->pc = 0x28CE60u;
    SET_GPR_U32(ctx, 31, 0x28CE68u);
    ctx->pc = 0x28CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE60u;
    // 0x28ce64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28CE60u, 0x28CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE68u;
label_28ce68:
    // 0x28ce68: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_28ce6c:
    if (ctx->pc == 0x28CE6Cu) {
        ctx->pc = 0x28CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE68u;
        // 0x28ce6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE70u;
        goto label_28ce70;
    }
    ctx->pc = 0x28CE68u;
    {
        const bool branch_taken_0x28ce68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE68u;
        // 0x28ce6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce68) {
            ctx->pc = 0x28D150u;
            goto label_28d150;
        }
    }
    ctx->pc = 0x28CE70u;
label_28ce70:
    // 0x28ce70: 0xc0741a4  jal         func_1D0690
label_28ce74:
    if (ctx->pc == 0x28CE74u) {
        ctx->pc = 0x28CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE70u;
        // 0x28ce74: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE78u;
        goto label_28ce78;
    }
    ctx->pc = 0x28CE70u;
    SET_GPR_U32(ctx, 31, 0x28CE78u);
    ctx->pc = 0x28CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE70u;
    // 0x28ce74: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x28CE70u, 0x28CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE78u;
label_28ce78:
    // 0x28ce78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28ce78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ce7c:
    // 0x28ce7c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_28ce80:
    if (ctx->pc == 0x28CE80u) {
        ctx->pc = 0x28CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE7Cu;
        // 0x28ce80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE84u;
        goto label_28ce84;
    }
    ctx->pc = 0x28CE7Cu;
    {
        const bool branch_taken_0x28ce7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE7Cu;
        // 0x28ce80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce7c) {
            ctx->pc = 0x28CEA0u;
            goto label_28cea0;
        }
    }
    ctx->pc = 0x28CE84u;
label_28ce84:
    // 0x28ce84: 0xc096b00  jal         func_25AC00
label_28ce88:
    if (ctx->pc == 0x28CE88u) {
        ctx->pc = 0x28CE8Cu;
        goto label_28ce8c;
    }
    ctx->pc = 0x28CE84u;
    SET_GPR_U32(ctx, 31, 0x28CE8Cu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x28CE84u, 0x28CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE8Cu;
label_28ce8c:
    // 0x28ce8c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x28ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_28ce90:
    // 0x28ce90: 0x24427680  addiu       $v0, $v0, 0x7680
    ctx->pc = 0x28ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30336));
label_28ce94:
    // 0x28ce94: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x28ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_28ce98:
    // 0x28ce98: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x28ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_28ce9c:
    // 0x28ce9c: 0x0  nop
    ctx->pc = 0x28ce9cu;
    // NOP
label_28cea0:
    // 0x28cea0: 0x126000a7  beqz        $s3, . + 4 + (0xA7 << 2)
label_28cea4:
    if (ctx->pc == 0x28CEA4u) {
        ctx->pc = 0x28CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEA0u;
        // 0x28cea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEA8u;
        goto label_28cea8;
    }
    ctx->pc = 0x28CEA0u;
    {
        const bool branch_taken_0x28cea0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEA0u;
        // 0x28cea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cea0) {
            ctx->pc = 0x28D140u;
            goto label_28d140;
        }
    }
    ctx->pc = 0x28CEA8u;
label_28cea8:
    // 0x28cea8: 0xc09d4fc  jal         func_2753F0
label_28ceac:
    if (ctx->pc == 0x28CEACu) {
        ctx->pc = 0x28CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEA8u;
        // 0x28ceac: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEB0u;
        goto label_28ceb0;
    }
    ctx->pc = 0x28CEA8u;
    SET_GPR_U32(ctx, 31, 0x28CEB0u);
    ctx->pc = 0x28CEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CEA8u;
    // 0x28ceac: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x28CEA8u, 0x28CEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CEB0u;
label_28ceb0:
    // 0x28ceb0: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x28ceb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_28ceb4:
    // 0x28ceb4: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28ceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28ceb8:
    // 0x28ceb8: 0xc09d524  jal         func_275490
label_28cebc:
    if (ctx->pc == 0x28CEBCu) {
        ctx->pc = 0x28CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEB8u;
        // 0x28cebc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEC0u;
        goto label_28cec0;
    }
    ctx->pc = 0x28CEB8u;
    SET_GPR_U32(ctx, 31, 0x28CEC0u);
    ctx->pc = 0x28CEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CEB8u;
    // 0x28cebc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x28CEB8u, 0x28CEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CEC0u;
label_28cec0:
    // 0x28cec0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28cec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cec4:
    // 0x28cec4: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_28cec8:
    if (ctx->pc == 0x28CEC8u) {
        ctx->pc = 0x28CECCu;
        goto label_28cecc;
    }
    ctx->pc = 0x28CEC4u;
    {
        const bool branch_taken_0x28cec4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cec4) {
            ctx->pc = 0x28CF00u;
            goto label_28cf00;
        }
    }
    ctx->pc = 0x28CECCu;
label_28cecc:
    // 0x28cecc: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_28ced0:
    if (ctx->pc == 0x28CED0u) {
        ctx->pc = 0x28CED4u;
        goto label_28ced4;
    }
    ctx->pc = 0x28CECCu;
    {
        const bool branch_taken_0x28cecc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cecc) {
            ctx->pc = 0x28CEE8u;
            goto label_28cee8;
        }
    }
    ctx->pc = 0x28CED4u;
label_28ced4:
    // 0x28ced4: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x28ced4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_28ced8:
    // 0x28ced8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28ced8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28cedc:
    // 0x28cedc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x28cedcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_28cee0:
    // 0x28cee0: 0x320f809  jalr        $t9
label_28cee4:
    if (ctx->pc == 0x28CEE4u) {
        ctx->pc = 0x28CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEE0u;
        // 0x28cee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEE8u;
        goto label_28cee8;
    }
    ctx->pc = 0x28CEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28CEE8u);
        ctx->pc = 0x28CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEE0u;
        // 0x28cee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CEE0u, 0x28CEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28CEE8u;
label_28cee8:
    // 0x28cee8: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28ceec:
    // 0x28ceec: 0xc09d4d8  jal         func_275360
label_28cef0:
    if (ctx->pc == 0x28CEF0u) {
        ctx->pc = 0x28CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEECu;
        // 0x28cef0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEF4u;
        goto label_28cef4;
    }
    ctx->pc = 0x28CEECu;
    SET_GPR_U32(ctx, 31, 0x28CEF4u);
    ctx->pc = 0x28CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CEECu;
    // 0x28cef0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28CEECu, 0x28CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CEF4u;
label_28cef4:
    // 0x28cef4: 0x10000096  b           . + 4 + (0x96 << 2)
label_28cef8:
    if (ctx->pc == 0x28CEF8u) {
        ctx->pc = 0x28CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEF4u;
        // 0x28cef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEFCu;
        goto label_28cefc;
    }
    ctx->pc = 0x28CEF4u;
    {
        const bool branch_taken_0x28cef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEF4u;
        // 0x28cef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cef4) {
            ctx->pc = 0x28D150u;
            goto label_28d150;
        }
    }
    ctx->pc = 0x28CEFCu;
label_28cefc:
    // 0x28cefc: 0x0  nop
    ctx->pc = 0x28cefcu;
    // NOP
label_28cf00:
    // 0x28cf00: 0x92460023  lbu         $a2, 0x23($s2)
    ctx->pc = 0x28cf00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_28cf04:
    // 0x28cf04: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28cf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28cf08:
    // 0x28cf08: 0xc09d524  jal         func_275490
label_28cf0c:
    if (ctx->pc == 0x28CF0Cu) {
        ctx->pc = 0x28CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF08u;
        // 0x28cf0c: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF10u;
        goto label_28cf10;
    }
    ctx->pc = 0x28CF08u;
    SET_GPR_U32(ctx, 31, 0x28CF10u);
    ctx->pc = 0x28CF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CF08u;
    // 0x28cf0c: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x28CF08u, 0x28CF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF10u;
label_28cf10:
    // 0x28cf10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28cf10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cf14:
    // 0x28cf14: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_28cf18:
    if (ctx->pc == 0x28CF18u) {
        ctx->pc = 0x28CF1Cu;
        goto label_28cf1c;
    }
    ctx->pc = 0x28CF14u;
    {
        const bool branch_taken_0x28cf14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cf14) {
            ctx->pc = 0x28CF50u;
            goto label_28cf50;
        }
    }
    ctx->pc = 0x28CF1Cu;
label_28cf1c:
    // 0x28cf1c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_28cf20:
    if (ctx->pc == 0x28CF20u) {
        ctx->pc = 0x28CF24u;
        goto label_28cf24;
    }
    ctx->pc = 0x28CF1Cu;
    {
        const bool branch_taken_0x28cf1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cf1c) {
            ctx->pc = 0x28CF38u;
            goto label_28cf38;
        }
    }
    ctx->pc = 0x28CF24u;
label_28cf24:
    // 0x28cf24: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x28cf24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_28cf28:
    // 0x28cf28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28cf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28cf2c:
    // 0x28cf2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x28cf2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_28cf30:
    // 0x28cf30: 0x320f809  jalr        $t9
label_28cf34:
    if (ctx->pc == 0x28CF34u) {
        ctx->pc = 0x28CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF30u;
        // 0x28cf34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF38u;
        goto label_28cf38;
    }
    ctx->pc = 0x28CF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28CF38u);
        ctx->pc = 0x28CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF30u;
        // 0x28cf34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CF30u, 0x28CF38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28CF38u;
label_28cf38:
    // 0x28cf38: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28cf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28cf3c:
    // 0x28cf3c: 0xc09d4d8  jal         func_275360
label_28cf40:
    if (ctx->pc == 0x28CF40u) {
        ctx->pc = 0x28CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF3Cu;
        // 0x28cf40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF44u;
        goto label_28cf44;
    }
    ctx->pc = 0x28CF3Cu;
    SET_GPR_U32(ctx, 31, 0x28CF44u);
    ctx->pc = 0x28CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CF3Cu;
    // 0x28cf40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28CF3Cu, 0x28CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF44u;
label_28cf44:
    // 0x28cf44: 0x10000082  b           . + 4 + (0x82 << 2)
label_28cf48:
    if (ctx->pc == 0x28CF48u) {
        ctx->pc = 0x28CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF44u;
        // 0x28cf48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF4Cu;
        goto label_28cf4c;
    }
    ctx->pc = 0x28CF44u;
    {
        const bool branch_taken_0x28cf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF44u;
        // 0x28cf48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf44) {
            ctx->pc = 0x28D150u;
            goto label_28d150;
        }
    }
    ctx->pc = 0x28CF4Cu;
label_28cf4c:
    // 0x28cf4c: 0x0  nop
    ctx->pc = 0x28cf4cu;
    // NOP
label_28cf50:
    // 0x28cf50: 0x9626000e  lhu         $a2, 0xE($s1)
    ctx->pc = 0x28cf50u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28cf54:
    // 0x28cf54: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28cf58:
    // 0x28cf58: 0xc09d524  jal         func_275490
label_28cf5c:
    if (ctx->pc == 0x28CF5Cu) {
        ctx->pc = 0x28CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF58u;
        // 0x28cf5c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF60u;
        goto label_28cf60;
    }
    ctx->pc = 0x28CF58u;
    SET_GPR_U32(ctx, 31, 0x28CF60u);
    ctx->pc = 0x28CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CF58u;
    // 0x28cf5c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x28CF58u, 0x28CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF60u;
label_28cf60:
    // 0x28cf60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28cf60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cf64:
    // 0x28cf64: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_28cf68:
    if (ctx->pc == 0x28CF68u) {
        ctx->pc = 0x28CF6Cu;
        goto label_28cf6c;
    }
    ctx->pc = 0x28CF64u;
    {
        const bool branch_taken_0x28cf64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cf64) {
            ctx->pc = 0x28CFA0u;
            goto label_28cfa0;
        }
    }
    ctx->pc = 0x28CF6Cu;
label_28cf6c:
    // 0x28cf6c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_28cf70:
    if (ctx->pc == 0x28CF70u) {
        ctx->pc = 0x28CF74u;
        goto label_28cf74;
    }
    ctx->pc = 0x28CF6Cu;
    {
        const bool branch_taken_0x28cf6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cf6c) {
            ctx->pc = 0x28CF88u;
            goto label_28cf88;
        }
    }
    ctx->pc = 0x28CF74u;
label_28cf74:
    // 0x28cf74: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x28cf74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_28cf78:
    // 0x28cf78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28cf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28cf7c:
    // 0x28cf7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x28cf7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_28cf80:
    // 0x28cf80: 0x320f809  jalr        $t9
label_28cf84:
    if (ctx->pc == 0x28CF84u) {
        ctx->pc = 0x28CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF80u;
        // 0x28cf84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF88u;
        goto label_28cf88;
    }
    ctx->pc = 0x28CF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28CF88u);
        ctx->pc = 0x28CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF80u;
        // 0x28cf84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CF80u, 0x28CF88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28CF88u;
label_28cf88:
    // 0x28cf88: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28cf8c:
    // 0x28cf8c: 0xc09d4d8  jal         func_275360
label_28cf90:
    if (ctx->pc == 0x28CF90u) {
        ctx->pc = 0x28CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF8Cu;
        // 0x28cf90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF94u;
        goto label_28cf94;
    }
    ctx->pc = 0x28CF8Cu;
    SET_GPR_U32(ctx, 31, 0x28CF94u);
    ctx->pc = 0x28CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CF8Cu;
    // 0x28cf90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28CF8Cu, 0x28CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF94u;
label_28cf94:
    // 0x28cf94: 0x1000006e  b           . + 4 + (0x6E << 2)
label_28cf98:
    if (ctx->pc == 0x28CF98u) {
        ctx->pc = 0x28CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF94u;
        // 0x28cf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF9Cu;
        goto label_28cf9c;
    }
    ctx->pc = 0x28CF94u;
    {
        const bool branch_taken_0x28cf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF94u;
        // 0x28cf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf94) {
            ctx->pc = 0x28D150u;
            goto label_28d150;
        }
    }
    ctx->pc = 0x28CF9Cu;
label_28cf9c:
    // 0x28cf9c: 0x0  nop
    ctx->pc = 0x28cf9cu;
    // NOP
label_28cfa0:
    // 0x28cfa0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x28cfa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28cfa4:
    // 0x28cfa4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x28cfa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28cfa8:
    // 0x28cfa8: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x28cfa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28cfac:
    // 0x28cfac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28cfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28cfb0:
    // 0x28cfb0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x28cfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_28cfb4:
    // 0x28cfb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28cfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28cfb8:
    // 0x28cfb8: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x28cfb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28cfbc:
    // 0x28cfbc: 0xc096b38  jal         func_25ACE0
label_28cfc0:
    if (ctx->pc == 0x28CFC0u) {
        ctx->pc = 0x28CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFBCu;
        // 0x28cfc0: 0x268b0020  addiu       $t3, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CFC4u;
        goto label_28cfc4;
    }
    ctx->pc = 0x28CFBCu;
    SET_GPR_U32(ctx, 31, 0x28CFC4u);
    ctx->pc = 0x28CFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CFBCu;
    // 0x28cfc0: 0x268b0020  addiu       $t3, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x28CFBCu, 0x28CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CFC4u;
label_28cfc4:
    // 0x28cfc4: 0x92620050  lbu         $v0, 0x50($s3)
    ctx->pc = 0x28cfc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
label_28cfc8:
    // 0x28cfc8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28cfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_28cfcc:
    // 0x28cfcc: 0xa2620050  sb          $v0, 0x50($s3)
    ctx->pc = 0x28cfccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
label_28cfd0:
    // 0x28cfd0: 0xa660005a  sh          $zero, 0x5A($s3)
    ctx->pc = 0x28cfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 90), (uint16_t)GPR_U32(ctx, 0));
label_28cfd4:
    // 0x28cfd4: 0xa6600058  sh          $zero, 0x58($s3)
    ctx->pc = 0x28cfd4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 0));
label_28cfd8:
    // 0x28cfd8: 0xa6600056  sh          $zero, 0x56($s3)
    ctx->pc = 0x28cfd8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
label_28cfdc:
    // 0x28cfdc: 0xa2600051  sb          $zero, 0x51($s3)
    ctx->pc = 0x28cfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 0));
label_28cfe0:
    // 0x28cfe0: 0xae720070  sw          $s2, 0x70($s3)
    ctx->pc = 0x28cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 18));
label_28cfe4:
    // 0x28cfe4: 0xae710074  sw          $s1, 0x74($s3)
    ctx->pc = 0x28cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 17));
label_28cfe8:
    // 0x28cfe8: 0xae700078  sw          $s0, 0x78($s3)
    ctx->pc = 0x28cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 16));
label_28cfec:
    // 0x28cfec: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x28cfecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_28cff0:
    // 0x28cff0: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x28cff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_28cff4:
    // 0x28cff4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x28cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_28cff8:
    // 0x28cff8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x28cff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28cffc:
    // 0x28cffc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28d000:
    // 0x28d000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d004:
    // 0x28d004: 0xc0741a4  jal         func_1D0690
label_28d008:
    if (ctx->pc == 0x28D008u) {
        ctx->pc = 0x28D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D004u;
        // 0x28d008: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D00Cu;
        goto label_28d00c;
    }
    ctx->pc = 0x28D004u;
    SET_GPR_U32(ctx, 31, 0x28D00Cu);
    ctx->pc = 0x28D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D004u;
    // 0x28d008: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x28D004u, 0x28D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D00Cu;
label_28d00c:
    // 0x28d00c: 0xae62007c  sw          $v0, 0x7C($s3)
    ctx->pc = 0x28d00cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
label_28d010:
    // 0x28d010: 0x9224000c  lbu         $a0, 0xC($s1)
    ctx->pc = 0x28d010u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_28d014:
    // 0x28d014: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x28d014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_28d018:
    // 0x28d018: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x28d018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_28d01c:
    // 0x28d01c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28d020:
    // 0x28d020: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28d020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_28d024:
    // 0x28d024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d028:
    // 0x28d028: 0xae620084  sw          $v0, 0x84($s3)
    ctx->pc = 0x28d028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
label_28d02c:
    // 0x28d02c: 0x9224000c  lbu         $a0, 0xC($s1)
    ctx->pc = 0x28d02cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_28d030:
    // 0x28d030: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x28d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_28d034:
    // 0x28d034: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x28d034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_28d038:
    // 0x28d038: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28d03c:
    // 0x28d03c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_28d040:
    // 0x28d040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d044:
    // 0x28d044: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x28d044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
label_28d048:
    // 0x28d048: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x28d048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_28d04c:
    // 0x28d04c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_28d050:
    if (ctx->pc == 0x28D050u) {
        ctx->pc = 0x28D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D04Cu;
        // 0x28d050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D054u;
        goto label_28d054;
    }
    ctx->pc = 0x28D04Cu;
    {
        const bool branch_taken_0x28d04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D04Cu;
        // 0x28d050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d04c) {
            ctx->pc = 0x28D070u;
            goto label_28d070;
        }
    }
    ctx->pc = 0x28D054u;
label_28d054:
    // 0x28d054: 0xc074268  jal         func_1D09A0
label_28d058:
    if (ctx->pc == 0x28D058u) {
        ctx->pc = 0x28D05Cu;
        goto label_28d05c;
    }
    ctx->pc = 0x28D054u;
    SET_GPR_U32(ctx, 31, 0x28D05Cu);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x28D054u, 0x28D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D05Cu;
label_28d05c:
    // 0x28d05c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28d060:
    // 0x28d060: 0xc09d4d8  jal         func_275360
label_28d064:
    if (ctx->pc == 0x28D064u) {
        ctx->pc = 0x28D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D060u;
        // 0x28d064: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D068u;
        goto label_28d068;
    }
    ctx->pc = 0x28D060u;
    SET_GPR_U32(ctx, 31, 0x28D068u);
    ctx->pc = 0x28D064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D060u;
    // 0x28d064: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28D060u, 0x28D068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D068u;
label_28d068:
    // 0x28d068: 0x10000039  b           . + 4 + (0x39 << 2)
label_28d06c:
    if (ctx->pc == 0x28D06Cu) {
        ctx->pc = 0x28D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D068u;
        // 0x28d06c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D070u;
        goto label_28d070;
    }
    ctx->pc = 0x28D068u;
    {
        const bool branch_taken_0x28d068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D068u;
        // 0x28d06c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d068) {
            ctx->pc = 0x28D150u;
            goto label_28d150;
        }
    }
    ctx->pc = 0x28D070u;
label_28d070:
    // 0x28d070: 0x9226000c  lbu         $a2, 0xC($s1)
    ctx->pc = 0x28d070u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_28d074:
    // 0x28d074: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x28d074u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_28d078:
    // 0x28d078: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_28d07c:
    if (ctx->pc == 0x28D07Cu) {
        ctx->pc = 0x28D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D078u;
        // 0x28d07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D080u;
        goto label_28d080;
    }
    ctx->pc = 0x28D078u;
    {
        const bool branch_taken_0x28d078 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D078u;
        // 0x28d07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d078) {
            ctx->pc = 0x28D0A8u;
            goto label_28d0a8;
        }
    }
    ctx->pc = 0x28D080u;
label_28d080:
    // 0x28d080: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28d080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d084:
    // 0x28d084: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28d084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28d088:
    // 0x28d088: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x28d088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_28d08c:
    // 0x28d08c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_28d090:
    // 0x28d090: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28d090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28d094:
    // 0x28d094: 0xa4430020  sh          $v1, 0x20($v0)
    ctx->pc = 0x28d094u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 3));
label_28d098:
    // 0x28d098: 0x9226000c  lbu         $a2, 0xC($s1)
    ctx->pc = 0x28d098u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_28d09c:
    // 0x28d09c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x28d09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_28d0a0:
    // 0x28d0a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_28d0a4:
    if (ctx->pc == 0x28D0A4u) {
        ctx->pc = 0x28D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0A0u;
        // 0x28d0a4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0A8u;
        goto label_28d0a8;
    }
    ctx->pc = 0x28D0A0u;
    {
        const bool branch_taken_0x28d0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0A0u;
        // 0x28d0a4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0a0) {
            ctx->pc = 0x28D088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d088;
        }
    }
    ctx->pc = 0x28D0A8u;
label_28d0a8:
    // 0x28d0a8: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x28d0a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_28d0ac:
    // 0x28d0ac: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_28d0b0:
    if (ctx->pc == 0x28D0B0u) {
        ctx->pc = 0x28D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0ACu;
        // 0x28d0b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0B4u;
        goto label_28d0b4;
    }
    ctx->pc = 0x28D0ACu;
    {
        const bool branch_taken_0x28d0ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0ACu;
        // 0x28d0b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0ac) {
            ctx->pc = 0x28D0E0u;
            goto label_28d0e0;
        }
    }
    ctx->pc = 0x28D0B4u;
label_28d0b4:
    // 0x28d0b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d0b8:
    // 0x28d0b8: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28d0bc:
    // 0x28d0bc: 0x0  nop
    ctx->pc = 0x28d0bcu;
    // NOP
label_28d0c0:
    // 0x28d0c0: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x28d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_28d0c4:
    // 0x28d0c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_28d0c8:
    // 0x28d0c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28d0cc:
    // 0x28d0cc: 0xa4430020  sh          $v1, 0x20($v0)
    ctx->pc = 0x28d0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 3));
label_28d0d0:
    // 0x28d0d0: 0x9226000c  lbu         $a2, 0xC($s1)
    ctx->pc = 0x28d0d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_28d0d4:
    // 0x28d0d4: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x28d0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_28d0d8:
    // 0x28d0d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_28d0dc:
    if (ctx->pc == 0x28D0DCu) {
        ctx->pc = 0x28D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0D8u;
        // 0x28d0dc: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0E0u;
        goto label_28d0e0;
    }
    ctx->pc = 0x28D0D8u;
    {
        const bool branch_taken_0x28d0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0D8u;
        // 0x28d0dc: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0d8) {
            ctx->pc = 0x28D0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d0c0;
        }
    }
    ctx->pc = 0x28D0E0u;
label_28d0e0:
    // 0x28d0e0: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x28d0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_28d0e4:
    // 0x28d0e4: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x28d0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28d0e8:
    // 0x28d0e8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28d0e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28d0ec:
    // 0x28d0ec: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_28d0f0:
    if (ctx->pc == 0x28D0F0u) {
        ctx->pc = 0x28D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0ECu;
        // 0x28d0f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0F4u;
        goto label_28d0f4;
    }
    ctx->pc = 0x28D0ECu;
    {
        const bool branch_taken_0x28d0ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0ECu;
        // 0x28d0f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0ec) {
            ctx->pc = 0x28D128u;
            goto label_28d128;
        }
    }
    ctx->pc = 0x28D0F4u;
label_28d0f4:
    // 0x28d0f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28d0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d0f8:
    // 0x28d0f8: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x28d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28d0fc:
    // 0x28d0fc: 0x0  nop
    ctx->pc = 0x28d0fcu;
    // NOP
label_28d100:
    // 0x28d100: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x28d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_28d104:
    // 0x28d104: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28d104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_28d108:
    // 0x28d108: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_28d10c:
    // 0x28d10c: 0xa4440020  sh          $a0, 0x20($v0)
    ctx->pc = 0x28d10cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 4));
label_28d110:
    // 0x28d110: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x28d110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_28d114:
    // 0x28d114: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x28d114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_28d118:
    // 0x28d118: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28d118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28d11c:
    // 0x28d11c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x28d11cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28d120:
    // 0x28d120: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_28d124:
    if (ctx->pc == 0x28D124u) {
        ctx->pc = 0x28D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D120u;
        // 0x28d124: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D128u;
        goto label_28d128;
    }
    ctx->pc = 0x28D120u;
    {
        const bool branch_taken_0x28d120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D120u;
        // 0x28d124: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d120) {
            ctx->pc = 0x28D100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d100;
        }
    }
    ctx->pc = 0x28D128u;
label_28d128:
    // 0x28d128: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x28d128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28d12c:
    // 0x28d12c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28d12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28d130:
    // 0x28d130: 0xc09d4d8  jal         func_275360
label_28d134:
    if (ctx->pc == 0x28D134u) {
        ctx->pc = 0x28D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D130u;
        // 0x28d134: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D138u;
        goto label_28d138;
    }
    ctx->pc = 0x28D130u;
    SET_GPR_U32(ctx, 31, 0x28D138u);
    ctx->pc = 0x28D134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D130u;
    // 0x28d134: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28D130u, 0x28D138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D138u;
label_28d138:
    // 0x28d138: 0x10000005  b           . + 4 + (0x5 << 2)
label_28d13c:
    if (ctx->pc == 0x28D13Cu) {
        ctx->pc = 0x28D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D138u;
        // 0x28d13c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D140u;
        goto label_28d140;
    }
    ctx->pc = 0x28D138u;
    {
        const bool branch_taken_0x28d138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D138u;
        // 0x28d13c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d138) {
            ctx->pc = 0x28D150u;
            goto label_28d150;
        }
    }
    ctx->pc = 0x28D140u;
label_28d140:
    // 0x28d140: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28d140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28d144:
    // 0x28d144: 0xc09d4d8  jal         func_275360
label_28d148:
    if (ctx->pc == 0x28D148u) {
        ctx->pc = 0x28D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D144u;
        // 0x28d148: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D14Cu;
        goto label_28d14c;
    }
    ctx->pc = 0x28D144u;
    SET_GPR_U32(ctx, 31, 0x28D14Cu);
    ctx->pc = 0x28D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D144u;
    // 0x28d148: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28D144u, 0x28D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D14Cu;
label_28d14c:
    // 0x28d14c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28d14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d150:
    // 0x28d150: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28d150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28d154:
    // 0x28d154: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28d154u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28d158:
    // 0x28d158: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28d158u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28d15c:
    // 0x28d15c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28d15cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28d160:
    // 0x28d160: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28d160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28d164:
    // 0x28d164: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28d164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28d168:
    // 0x28d168: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28d168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28d16c:
    // 0x28d16c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28d170:
    // 0x28d170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28d174:
    // 0x28d174: 0x3e00008  jr          $ra
label_28d178:
    if (ctx->pc == 0x28D178u) {
        ctx->pc = 0x28D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D174u;
        // 0x28d178: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D17Cu;
        goto label_fallthrough_0x28d174;
    }
    ctx->pc = 0x28D174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D174u;
        // 0x28d178: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28d174:
    ctx->pc = 0x28D17Cu;
}
