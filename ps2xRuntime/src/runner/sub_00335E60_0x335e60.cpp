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

// Function: sub_00335E60
// Address: 0x335e60 - 0x336148
void sub_00335E60_0x335e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335E60_0x335e60");
#endif

    switch (ctx->pc) {
        case 0x335e60u: goto label_335e60;
        case 0x335e64u: goto label_335e64;
        case 0x335e68u: goto label_335e68;
        case 0x335e6cu: goto label_335e6c;
        case 0x335e70u: goto label_335e70;
        case 0x335e74u: goto label_335e74;
        case 0x335e78u: goto label_335e78;
        case 0x335e7cu: goto label_335e7c;
        case 0x335e80u: goto label_335e80;
        case 0x335e84u: goto label_335e84;
        case 0x335e88u: goto label_335e88;
        case 0x335e8cu: goto label_335e8c;
        case 0x335e90u: goto label_335e90;
        case 0x335e94u: goto label_335e94;
        case 0x335e98u: goto label_335e98;
        case 0x335e9cu: goto label_335e9c;
        case 0x335ea0u: goto label_335ea0;
        case 0x335ea4u: goto label_335ea4;
        case 0x335ea8u: goto label_335ea8;
        case 0x335eacu: goto label_335eac;
        case 0x335eb0u: goto label_335eb0;
        case 0x335eb4u: goto label_335eb4;
        case 0x335eb8u: goto label_335eb8;
        case 0x335ebcu: goto label_335ebc;
        case 0x335ec0u: goto label_335ec0;
        case 0x335ec4u: goto label_335ec4;
        case 0x335ec8u: goto label_335ec8;
        case 0x335eccu: goto label_335ecc;
        case 0x335ed0u: goto label_335ed0;
        case 0x335ed4u: goto label_335ed4;
        case 0x335ed8u: goto label_335ed8;
        case 0x335edcu: goto label_335edc;
        case 0x335ee0u: goto label_335ee0;
        case 0x335ee4u: goto label_335ee4;
        case 0x335ee8u: goto label_335ee8;
        case 0x335eecu: goto label_335eec;
        case 0x335ef0u: goto label_335ef0;
        case 0x335ef4u: goto label_335ef4;
        case 0x335ef8u: goto label_335ef8;
        case 0x335efcu: goto label_335efc;
        case 0x335f00u: goto label_335f00;
        case 0x335f04u: goto label_335f04;
        case 0x335f08u: goto label_335f08;
        case 0x335f0cu: goto label_335f0c;
        case 0x335f10u: goto label_335f10;
        case 0x335f14u: goto label_335f14;
        case 0x335f18u: goto label_335f18;
        case 0x335f1cu: goto label_335f1c;
        case 0x335f20u: goto label_335f20;
        case 0x335f24u: goto label_335f24;
        case 0x335f28u: goto label_335f28;
        case 0x335f2cu: goto label_335f2c;
        case 0x335f30u: goto label_335f30;
        case 0x335f34u: goto label_335f34;
        case 0x335f38u: goto label_335f38;
        case 0x335f3cu: goto label_335f3c;
        case 0x335f40u: goto label_335f40;
        case 0x335f44u: goto label_335f44;
        case 0x335f48u: goto label_335f48;
        case 0x335f4cu: goto label_335f4c;
        case 0x335f50u: goto label_335f50;
        case 0x335f54u: goto label_335f54;
        case 0x335f58u: goto label_335f58;
        case 0x335f5cu: goto label_335f5c;
        case 0x335f60u: goto label_335f60;
        case 0x335f64u: goto label_335f64;
        case 0x335f68u: goto label_335f68;
        case 0x335f6cu: goto label_335f6c;
        case 0x335f70u: goto label_335f70;
        case 0x335f74u: goto label_335f74;
        case 0x335f78u: goto label_335f78;
        case 0x335f7cu: goto label_335f7c;
        case 0x335f80u: goto label_335f80;
        case 0x335f84u: goto label_335f84;
        case 0x335f88u: goto label_335f88;
        case 0x335f8cu: goto label_335f8c;
        case 0x335f90u: goto label_335f90;
        case 0x335f94u: goto label_335f94;
        case 0x335f98u: goto label_335f98;
        case 0x335f9cu: goto label_335f9c;
        case 0x335fa0u: goto label_335fa0;
        case 0x335fa4u: goto label_335fa4;
        case 0x335fa8u: goto label_335fa8;
        case 0x335facu: goto label_335fac;
        case 0x335fb0u: goto label_335fb0;
        case 0x335fb4u: goto label_335fb4;
        case 0x335fb8u: goto label_335fb8;
        case 0x335fbcu: goto label_335fbc;
        case 0x335fc0u: goto label_335fc0;
        case 0x335fc4u: goto label_335fc4;
        case 0x335fc8u: goto label_335fc8;
        case 0x335fccu: goto label_335fcc;
        case 0x335fd0u: goto label_335fd0;
        case 0x335fd4u: goto label_335fd4;
        case 0x335fd8u: goto label_335fd8;
        case 0x335fdcu: goto label_335fdc;
        case 0x335fe0u: goto label_335fe0;
        case 0x335fe4u: goto label_335fe4;
        case 0x335fe8u: goto label_335fe8;
        case 0x335fecu: goto label_335fec;
        case 0x335ff0u: goto label_335ff0;
        case 0x335ff4u: goto label_335ff4;
        case 0x335ff8u: goto label_335ff8;
        case 0x335ffcu: goto label_335ffc;
        case 0x336000u: goto label_336000;
        case 0x336004u: goto label_336004;
        case 0x336008u: goto label_336008;
        case 0x33600cu: goto label_33600c;
        case 0x336010u: goto label_336010;
        case 0x336014u: goto label_336014;
        case 0x336018u: goto label_336018;
        case 0x33601cu: goto label_33601c;
        case 0x336020u: goto label_336020;
        case 0x336024u: goto label_336024;
        case 0x336028u: goto label_336028;
        case 0x33602cu: goto label_33602c;
        case 0x336030u: goto label_336030;
        case 0x336034u: goto label_336034;
        case 0x336038u: goto label_336038;
        case 0x33603cu: goto label_33603c;
        case 0x336040u: goto label_336040;
        case 0x336044u: goto label_336044;
        case 0x336048u: goto label_336048;
        case 0x33604cu: goto label_33604c;
        case 0x336050u: goto label_336050;
        case 0x336054u: goto label_336054;
        case 0x336058u: goto label_336058;
        case 0x33605cu: goto label_33605c;
        case 0x336060u: goto label_336060;
        case 0x336064u: goto label_336064;
        case 0x336068u: goto label_336068;
        case 0x33606cu: goto label_33606c;
        case 0x336070u: goto label_336070;
        case 0x336074u: goto label_336074;
        case 0x336078u: goto label_336078;
        case 0x33607cu: goto label_33607c;
        case 0x336080u: goto label_336080;
        case 0x336084u: goto label_336084;
        case 0x336088u: goto label_336088;
        case 0x33608cu: goto label_33608c;
        case 0x336090u: goto label_336090;
        case 0x336094u: goto label_336094;
        case 0x336098u: goto label_336098;
        case 0x33609cu: goto label_33609c;
        case 0x3360a0u: goto label_3360a0;
        case 0x3360a4u: goto label_3360a4;
        case 0x3360a8u: goto label_3360a8;
        case 0x3360acu: goto label_3360ac;
        case 0x3360b0u: goto label_3360b0;
        case 0x3360b4u: goto label_3360b4;
        case 0x3360b8u: goto label_3360b8;
        case 0x3360bcu: goto label_3360bc;
        case 0x3360c0u: goto label_3360c0;
        case 0x3360c4u: goto label_3360c4;
        case 0x3360c8u: goto label_3360c8;
        case 0x3360ccu: goto label_3360cc;
        case 0x3360d0u: goto label_3360d0;
        case 0x3360d4u: goto label_3360d4;
        case 0x3360d8u: goto label_3360d8;
        case 0x3360dcu: goto label_3360dc;
        case 0x3360e0u: goto label_3360e0;
        case 0x3360e4u: goto label_3360e4;
        case 0x3360e8u: goto label_3360e8;
        case 0x3360ecu: goto label_3360ec;
        case 0x3360f0u: goto label_3360f0;
        case 0x3360f4u: goto label_3360f4;
        case 0x3360f8u: goto label_3360f8;
        case 0x3360fcu: goto label_3360fc;
        case 0x336100u: goto label_336100;
        case 0x336104u: goto label_336104;
        case 0x336108u: goto label_336108;
        case 0x33610cu: goto label_33610c;
        case 0x336110u: goto label_336110;
        case 0x336114u: goto label_336114;
        case 0x336118u: goto label_336118;
        case 0x33611cu: goto label_33611c;
        case 0x336120u: goto label_336120;
        case 0x336124u: goto label_336124;
        case 0x336128u: goto label_336128;
        case 0x33612cu: goto label_33612c;
        case 0x336130u: goto label_336130;
        case 0x336134u: goto label_336134;
        case 0x336138u: goto label_336138;
        case 0x33613cu: goto label_33613c;
        case 0x336140u: goto label_336140;
        case 0x336144u: goto label_336144;
        default: break;
    }

    ctx->pc = 0x335e60u;

label_335e60:
    // 0x335e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_335e64:
    // 0x335e64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_335e68:
    // 0x335e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_335e6c:
    // 0x335e6c: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x335e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
label_335e70:
    // 0x335e70: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x335e70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_335e74:
    // 0x335e74: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_335e78:
    if (ctx->pc == 0x335E78u) {
        ctx->pc = 0x335E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E74u;
        // 0x335e78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335E7Cu;
        goto label_335e7c;
    }
    ctx->pc = 0x335E74u;
    {
        const bool branch_taken_0x335e74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x335E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E74u;
        // 0x335e78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e74) {
            ctx->pc = 0x335E98u;
            goto label_335e98;
        }
    }
    ctx->pc = 0x335E7Cu;
label_335e7c:
    // 0x335e7c: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x335e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_335e80:
    // 0x335e80: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x335e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_335e84:
    // 0x335e84: 0x320f809  jalr        $t9
label_335e88:
    if (ctx->pc == 0x335E88u) {
        ctx->pc = 0x335E8Cu;
        goto label_335e8c;
    }
    ctx->pc = 0x335E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x335E8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335E84u, 0x335E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x335E8Cu;
label_335e8c:
    // 0x335e8c: 0x100000aa  b           . + 4 + (0xAA << 2)
label_335e90:
    if (ctx->pc == 0x335E90u) {
        ctx->pc = 0x335E94u;
        goto label_335e94;
    }
    ctx->pc = 0x335E8Cu;
    {
        const bool branch_taken_0x335e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335e8c) {
            ctx->pc = 0x336138u;
            goto label_336138;
        }
    }
    ctx->pc = 0x335E94u;
label_335e94:
    // 0x335e94: 0x0  nop
    ctx->pc = 0x335e94u;
    // NOP
label_335e98:
    // 0x335e98: 0xc0a6d4c  jal         func_29B530
label_335e9c:
    if (ctx->pc == 0x335E9Cu) {
        ctx->pc = 0x335EA0u;
        goto label_335ea0;
    }
    ctx->pc = 0x335E98u;
    SET_GPR_U32(ctx, 31, 0x335EA0u);
    ctx->pc = 0x29B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B530u, 0x335E98u, 0x335EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335EA0u;
label_335ea0:
    // 0x335ea0: 0x8e0506b4  lw          $a1, 0x6B4($s0)
    ctx->pc = 0x335ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
label_335ea4:
    // 0x335ea4: 0x8e0306b8  lw          $v1, 0x6B8($s0)
    ctx->pc = 0x335ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1720)));
label_335ea8:
    // 0x335ea8: 0x8e0406ac  lw          $a0, 0x6AC($s0)
    ctx->pc = 0x335ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_335eac:
    // 0x335eac: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x335eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_335eb0:
    // 0x335eb0: 0xae0306ac  sw          $v1, 0x6AC($s0)
    ctx->pc = 0x335eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1708), GPR_U32(ctx, 3));
label_335eb4:
    // 0x335eb4: 0x802027  not         $a0, $a0
    ctx->pc = 0x335eb4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_335eb8:
    // 0x335eb8: 0xae0006b4  sw          $zero, 0x6B4($s0)
    ctx->pc = 0x335eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 0));
label_335ebc:
    // 0x335ebc: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x335ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_335ec0:
    // 0x335ec0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x335ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_335ec4:
    // 0x335ec4: 0xae0306b0  sw          $v1, 0x6B0($s0)
    ctx->pc = 0x335ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1712), GPR_U32(ctx, 3));
label_335ec8:
    // 0x335ec8: 0x960329d2  lhu         $v1, 0x29D2($s0)
    ctx->pc = 0x335ec8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10706)));
label_335ecc:
    // 0x335ecc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_335ed0:
    if (ctx->pc == 0x335ED0u) {
        ctx->pc = 0x335ED4u;
        goto label_335ed4;
    }
    ctx->pc = 0x335ECCu;
    {
        const bool branch_taken_0x335ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335ecc) {
            ctx->pc = 0x335EE0u;
            goto label_335ee0;
        }
    }
    ctx->pc = 0x335ED4u;
label_335ed4:
    // 0x335ed4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x335ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_335ed8:
    // 0x335ed8: 0xa60329d2  sh          $v1, 0x29D2($s0)
    ctx->pc = 0x335ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10706), (uint16_t)GPR_U32(ctx, 3));
label_335edc:
    // 0x335edc: 0x0  nop
    ctx->pc = 0x335edcu;
    // NOP
label_335ee0:
    // 0x335ee0: 0x960329d4  lhu         $v1, 0x29D4($s0)
    ctx->pc = 0x335ee0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10708)));
label_335ee4:
    // 0x335ee4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_335ee8:
    if (ctx->pc == 0x335EE8u) {
        ctx->pc = 0x335EECu;
        goto label_335eec;
    }
    ctx->pc = 0x335EE4u;
    {
        const bool branch_taken_0x335ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335ee4) {
            ctx->pc = 0x335EF8u;
            goto label_335ef8;
        }
    }
    ctx->pc = 0x335EECu;
label_335eec:
    // 0x335eec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x335eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_335ef0:
    // 0x335ef0: 0xa60329d4  sh          $v1, 0x29D4($s0)
    ctx->pc = 0x335ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10708), (uint16_t)GPR_U32(ctx, 3));
label_335ef4:
    // 0x335ef4: 0x0  nop
    ctx->pc = 0x335ef4u;
    // NOP
label_335ef8:
    // 0x335ef8: 0x92030783  lbu         $v1, 0x783($s0)
    ctx->pc = 0x335ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1923)));
label_335efc:
    // 0x335efc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_335f00:
    if (ctx->pc == 0x335F00u) {
        ctx->pc = 0x335F04u;
        goto label_335f04;
    }
    ctx->pc = 0x335EFCu;
    {
        const bool branch_taken_0x335efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335efc) {
            ctx->pc = 0x335F10u;
            goto label_335f10;
        }
    }
    ctx->pc = 0x335F04u;
label_335f04:
    // 0x335f04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x335f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_335f08:
    // 0x335f08: 0xa2030783  sb          $v1, 0x783($s0)
    ctx->pc = 0x335f08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1923), (uint8_t)GPR_U32(ctx, 3));
label_335f0c:
    // 0x335f0c: 0x0  nop
    ctx->pc = 0x335f0cu;
    // NOP
label_335f10:
    // 0x335f10: 0x96030788  lhu         $v1, 0x788($s0)
    ctx->pc = 0x335f10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1928)));
label_335f14:
    // 0x335f14: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x335f14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_335f18:
    // 0x335f18: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x335f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_335f1c:
    // 0x335f1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_335f20:
    if (ctx->pc == 0x335F20u) {
        ctx->pc = 0x335F24u;
        goto label_335f24;
    }
    ctx->pc = 0x335F1Cu;
    {
        const bool branch_taken_0x335f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335f1c) {
            ctx->pc = 0x335F30u;
            goto label_335f30;
        }
    }
    ctx->pc = 0x335F24u;
label_335f24:
    // 0x335f24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x335f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_335f28:
    // 0x335f28: 0xa6030788  sh          $v1, 0x788($s0)
    ctx->pc = 0x335f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1928), (uint16_t)GPR_U32(ctx, 3));
label_335f2c:
    // 0x335f2c: 0x0  nop
    ctx->pc = 0x335f2cu;
    // NOP
label_335f30:
    // 0x335f30: 0x92030781  lbu         $v1, 0x781($s0)
    ctx->pc = 0x335f30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1921)));
label_335f34:
    // 0x335f34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_335f38:
    if (ctx->pc == 0x335F38u) {
        ctx->pc = 0x335F3Cu;
        goto label_335f3c;
    }
    ctx->pc = 0x335F34u;
    {
        const bool branch_taken_0x335f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335f34) {
            ctx->pc = 0x335F48u;
            goto label_335f48;
        }
    }
    ctx->pc = 0x335F3Cu;
label_335f3c:
    // 0x335f3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x335f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_335f40:
    // 0x335f40: 0xa2030781  sb          $v1, 0x781($s0)
    ctx->pc = 0x335f40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1921), (uint8_t)GPR_U32(ctx, 3));
label_335f44:
    // 0x335f44: 0x0  nop
    ctx->pc = 0x335f44u;
    // NOP
label_335f48:
    // 0x335f48: 0x92040781  lbu         $a0, 0x781($s0)
    ctx->pc = 0x335f48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1921)));
label_335f4c:
    // 0x335f4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_335f50:
    // 0x335f50: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_335f54:
    if (ctx->pc == 0x335F54u) {
        ctx->pc = 0x335F58u;
        goto label_335f58;
    }
    ctx->pc = 0x335F50u;
    {
        const bool branch_taken_0x335f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x335f50) {
            ctx->pc = 0x335F70u;
            goto label_335f70;
        }
    }
    ctx->pc = 0x335F58u;
label_335f58:
    // 0x335f58: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x335f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_335f5c:
    // 0x335f5c: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x335f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
label_335f60:
    // 0x335f60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x335f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_335f64:
    // 0x335f64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x335f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_335f68:
    // 0x335f68: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x335f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
label_335f6c:
    // 0x335f6c: 0x0  nop
    ctx->pc = 0x335f6cu;
    // NOP
label_335f70:
    // 0x335f70: 0x92030781  lbu         $v1, 0x781($s0)
    ctx->pc = 0x335f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1921)));
label_335f74:
    // 0x335f74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_335f78:
    if (ctx->pc == 0x335F78u) {
        ctx->pc = 0x335F7Cu;
        goto label_335f7c;
    }
    ctx->pc = 0x335F74u;
    {
        const bool branch_taken_0x335f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335f74) {
            ctx->pc = 0x335F88u;
            goto label_335f88;
        }
    }
    ctx->pc = 0x335F7Cu;
label_335f7c:
    // 0x335f7c: 0x92030782  lbu         $v1, 0x782($s0)
    ctx->pc = 0x335f7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1922)));
label_335f80:
    // 0x335f80: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_335f84:
    if (ctx->pc == 0x335F84u) {
        ctx->pc = 0x335F88u;
        goto label_335f88;
    }
    ctx->pc = 0x335F80u;
    {
        const bool branch_taken_0x335f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335f80) {
            ctx->pc = 0x336000u;
            goto label_336000;
        }
    }
    ctx->pc = 0x335F88u;
label_335f88:
    // 0x335f88: 0x920407d6  lbu         $a0, 0x7D6($s0)
    ctx->pc = 0x335f88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2006)));
label_335f8c:
    // 0x335f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_335f90:
    // 0x335f90: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_335f94:
    if (ctx->pc == 0x335F94u) {
        ctx->pc = 0x335F98u;
        goto label_335f98;
    }
    ctx->pc = 0x335F90u;
    {
        const bool branch_taken_0x335f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x335f90) {
            ctx->pc = 0x336000u;
            goto label_336000;
        }
    }
    ctx->pc = 0x335F98u;
label_335f98:
    // 0x335f98: 0x92020782  lbu         $v0, 0x782($s0)
    ctx->pc = 0x335f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1922)));
label_335f9c:
    // 0x335f9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_335fa0:
    if (ctx->pc == 0x335FA0u) {
        ctx->pc = 0x335FA4u;
        goto label_335fa4;
    }
    ctx->pc = 0x335F9Cu;
    {
        const bool branch_taken_0x335f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335f9c) {
            ctx->pc = 0x335FC0u;
            goto label_335fc0;
        }
    }
    ctx->pc = 0x335FA4u;
label_335fa4:
    // 0x335fa4: 0xa2020781  sb          $v0, 0x781($s0)
    ctx->pc = 0x335fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1921), (uint8_t)GPR_U32(ctx, 2));
label_335fa8:
    // 0x335fa8: 0xa2000782  sb          $zero, 0x782($s0)
    ctx->pc = 0x335fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1922), (uint8_t)GPR_U32(ctx, 0));
label_335fac:
    // 0x335fac: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x335facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_335fb0:
    // 0x335fb0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x335fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_335fb4:
    // 0x335fb4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x335fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_335fb8:
    // 0x335fb8: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x335fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_335fbc:
    // 0x335fbc: 0x0  nop
    ctx->pc = 0x335fbcu;
    // NOP
label_335fc0:
    // 0x335fc0: 0xc09f920  jal         func_27E480
label_335fc4:
    if (ctx->pc == 0x335FC4u) {
        ctx->pc = 0x335FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335FC0u;
        // 0x335fc4: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335FC8u;
        goto label_335fc8;
    }
    ctx->pc = 0x335FC0u;
    SET_GPR_U32(ctx, 31, 0x335FC8u);
    ctx->pc = 0x335FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335FC0u;
    // 0x335fc4: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E480u, 0x335FC0u, 0x335FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335FC8u;
label_335fc8:
    // 0x335fc8: 0x96020824  lhu         $v0, 0x824($s0)
    ctx->pc = 0x335fc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
label_335fcc:
    // 0x335fcc: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x335fccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_335fd0:
    // 0x335fd0: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x335fd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_335fd4:
    // 0x335fd4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_335fd8:
    if (ctx->pc == 0x335FD8u) {
        ctx->pc = 0x335FDCu;
        goto label_335fdc;
    }
    ctx->pc = 0x335FD4u;
    {
        const bool branch_taken_0x335fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335fd4) {
            ctx->pc = 0x335FE8u;
            goto label_335fe8;
        }
    }
    ctx->pc = 0x335FDCu;
label_335fdc:
    // 0x335fdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x335fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_335fe0:
    // 0x335fe0: 0xa6020824  sh          $v0, 0x824($s0)
    ctx->pc = 0x335fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2084), (uint16_t)GPR_U32(ctx, 2));
label_335fe4:
    // 0x335fe4: 0x0  nop
    ctx->pc = 0x335fe4u;
    // NOP
label_335fe8:
    // 0x335fe8: 0xae0006b8  sw          $zero, 0x6B8($s0)
    ctx->pc = 0x335fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1720), GPR_U32(ctx, 0));
label_335fec:
    // 0x335fec: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x335fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_335ff0:
    // 0x335ff0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x335ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_335ff4:
    // 0x335ff4: 0x320f809  jalr        $t9
label_335ff8:
    if (ctx->pc == 0x335FF8u) {
        ctx->pc = 0x335FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335FF4u;
        // 0x335ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335FFCu;
        goto label_335ffc;
    }
    ctx->pc = 0x335FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x335FFCu);
        ctx->pc = 0x335FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335FF4u;
        // 0x335ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335FF4u, 0x335FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x335FFCu;
label_335ffc:
    // 0x335ffc: 0x0  nop
    ctx->pc = 0x335ffcu;
    // NOP
label_336000:
    // 0x336000: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x336000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_336004:
    // 0x336004: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x336004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_336008:
    // 0x336008: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_33600c:
    if (ctx->pc == 0x33600Cu) {
        ctx->pc = 0x336010u;
        goto label_336010;
    }
    ctx->pc = 0x336008u;
    {
        const bool branch_taken_0x336008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x336008) {
            ctx->pc = 0x336020u;
            goto label_336020;
        }
    }
    ctx->pc = 0x336010u;
label_336010:
    // 0x336010: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x336010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_336014:
    // 0x336014: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x336014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_336018:
    // 0x336018: 0x10000005  b           . + 4 + (0x5 << 2)
label_33601c:
    if (ctx->pc == 0x33601Cu) {
        ctx->pc = 0x33601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336018u;
        // 0x33601c: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336020u;
        goto label_336020;
    }
    ctx->pc = 0x336018u;
    {
        const bool branch_taken_0x336018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336018u;
        // 0x33601c: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336018) {
            ctx->pc = 0x336030u;
            goto label_336030;
        }
    }
    ctx->pc = 0x336020u;
label_336020:
    // 0x336020: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x336020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_336024:
    // 0x336024: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x336024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_336028:
    // 0x336028: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x336028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_33602c:
    // 0x33602c: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x33602cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_336030:
    // 0x336030: 0x920300e4  lbu         $v1, 0xE4($s0)
    ctx->pc = 0x336030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 228)));
label_336034:
    // 0x336034: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_336038:
    if (ctx->pc == 0x336038u) {
        ctx->pc = 0x336038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336034u;
        // 0x336038: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33603Cu;
        goto label_33603c;
    }
    ctx->pc = 0x336034u;
    {
        const bool branch_taken_0x336034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x336038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336034u;
        // 0x336038: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336034) {
            ctx->pc = 0x336060u;
            goto label_336060;
        }
    }
    ctx->pc = 0x33603Cu;
label_33603c:
    // 0x33603c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33603cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_336040:
    // 0x336040: 0xc053a04  jal         func_14E810
label_336044:
    if (ctx->pc == 0x336044u) {
        ctx->pc = 0x336044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336040u;
        // 0x336044: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336048u;
        goto label_336048;
    }
    ctx->pc = 0x336040u;
    SET_GPR_U32(ctx, 31, 0x336048u);
    ctx->pc = 0x336044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336040u;
    // 0x336044: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E810u, 0x336040u, 0x336048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336048u;
label_336048:
    // 0x336048: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33604c:
    if (ctx->pc == 0x33604Cu) {
        ctx->pc = 0x336050u;
        goto label_336050;
    }
    ctx->pc = 0x336048u;
    {
        const bool branch_taken_0x336048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336048) {
            ctx->pc = 0x336060u;
            goto label_336060;
        }
    }
    ctx->pc = 0x336050u;
label_336050:
    // 0x336050: 0x8e0306b4  lw          $v1, 0x6B4($s0)
    ctx->pc = 0x336050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
label_336054:
    // 0x336054: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x336054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_336058:
    // 0x336058: 0xae0306b4  sw          $v1, 0x6B4($s0)
    ctx->pc = 0x336058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 3));
label_33605c:
    // 0x33605c: 0x0  nop
    ctx->pc = 0x33605cu;
    // NOP
label_336060:
    // 0x336060: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x336060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_336064:
    // 0x336064: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_336068:
    if (ctx->pc == 0x336068u) {
        ctx->pc = 0x33606Cu;
        goto label_33606c;
    }
    ctx->pc = 0x336064u;
    {
        const bool branch_taken_0x336064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x336064) {
            ctx->pc = 0x336098u;
            goto label_336098;
        }
    }
    ctx->pc = 0x33606Cu;
label_33606c:
    // 0x33606c: 0x9083007c  lbu         $v1, 0x7C($a0)
    ctx->pc = 0x33606cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
label_336070:
    // 0x336070: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_336074:
    if (ctx->pc == 0x336074u) {
        ctx->pc = 0x336078u;
        goto label_336078;
    }
    ctx->pc = 0x336070u;
    {
        const bool branch_taken_0x336070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x336070) {
            ctx->pc = 0x336098u;
            goto label_336098;
        }
    }
    ctx->pc = 0x336078u;
label_336078:
    // 0x336078: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x336078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_33607c:
    // 0x33607c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_336080:
    if (ctx->pc == 0x336080u) {
        ctx->pc = 0x336080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33607Cu;
        // 0x336080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336084u;
        goto label_336084;
    }
    ctx->pc = 0x33607Cu;
    {
        const bool branch_taken_0x33607c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x336080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33607Cu;
        // 0x336080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33607c) {
            ctx->pc = 0x336098u;
            goto label_336098;
        }
    }
    ctx->pc = 0x336084u;
label_336084:
    // 0x336084: 0xc05efdc  jal         func_17BF70
label_336088:
    if (ctx->pc == 0x336088u) {
        ctx->pc = 0x33608Cu;
        goto label_33608c;
    }
    ctx->pc = 0x336084u;
    SET_GPR_U32(ctx, 31, 0x33608Cu);
    ctx->pc = 0x17BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BF70u, 0x336084u, 0x33608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33608Cu;
label_33608c:
    // 0x33608c: 0xc05f2c0  jal         func_17CB00
label_336090:
    if (ctx->pc == 0x336090u) {
        ctx->pc = 0x336090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33608Cu;
        // 0x336090: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336094u;
        goto label_336094;
    }
    ctx->pc = 0x33608Cu;
    SET_GPR_U32(ctx, 31, 0x336094u);
    ctx->pc = 0x336090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33608Cu;
    // 0x336090: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB00u, 0x33608Cu, 0x336094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336094u;
label_336094:
    // 0x336094: 0x0  nop
    ctx->pc = 0x336094u;
    // NOP
label_336098:
    // 0x336098: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x336098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_33609c:
    // 0x33609c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_3360a0:
    if (ctx->pc == 0x3360A0u) {
        ctx->pc = 0x3360A4u;
        goto label_3360a4;
    }
    ctx->pc = 0x33609Cu;
    {
        const bool branch_taken_0x33609c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33609c) {
            ctx->pc = 0x336138u;
            goto label_336138;
        }
    }
    ctx->pc = 0x3360A4u;
label_3360a4:
    // 0x3360a4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3360a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3360a8:
    // 0x3360a8: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_3360ac:
    if (ctx->pc == 0x3360ACu) {
        ctx->pc = 0x3360B0u;
        goto label_3360b0;
    }
    ctx->pc = 0x3360A8u;
    {
        const bool branch_taken_0x3360a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3360a8) {
            ctx->pc = 0x336138u;
            goto label_336138;
        }
    }
    ctx->pc = 0x3360B0u;
label_3360b0:
    // 0x3360b0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x3360b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_3360b4:
    // 0x3360b4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3360b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_3360b8:
    // 0x3360b8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3360b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3360bc:
    // 0x3360bc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3360bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3360c0:
    // 0x3360c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3360c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3360c4:
    // 0x3360c4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_3360c8:
    if (ctx->pc == 0x3360C8u) {
        ctx->pc = 0x3360CCu;
        goto label_3360cc;
    }
    ctx->pc = 0x3360C4u;
    {
        const bool branch_taken_0x3360c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3360c4) {
            ctx->pc = 0x336138u;
            goto label_336138;
        }
    }
    ctx->pc = 0x3360CCu;
label_3360cc:
    // 0x3360cc: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x3360ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_3360d0:
    // 0x3360d0: 0x30420600  andi        $v0, $v0, 0x600
    ctx->pc = 0x3360d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1536);
label_3360d4:
    // 0x3360d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3360d8:
    if (ctx->pc == 0x3360D8u) {
        ctx->pc = 0x3360DCu;
        goto label_3360dc;
    }
    ctx->pc = 0x3360D4u;
    {
        const bool branch_taken_0x3360d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3360d4) {
            ctx->pc = 0x3360F0u;
            goto label_3360f0;
        }
    }
    ctx->pc = 0x3360DCu;
label_3360dc:
    // 0x3360dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3360dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3360e0:
    // 0x3360e0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3360e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3360e4:
    // 0x3360e4: 0x320f809  jalr        $t9
label_3360e8:
    if (ctx->pc == 0x3360E8u) {
        ctx->pc = 0x3360E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360E4u;
        // 0x3360e8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3360ECu;
        goto label_3360ec;
    }
    ctx->pc = 0x3360E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3360ECu);
        ctx->pc = 0x3360E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360E4u;
        // 0x3360e8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3360E4u, 0x3360ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3360ECu;
label_3360ec:
    // 0x3360ec: 0x0  nop
    ctx->pc = 0x3360ecu;
    // NOP
label_3360f0:
    // 0x3360f0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3360f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3360f4:
    // 0x3360f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3360f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3360f8:
    // 0x3360f8: 0x908300ce  lbu         $v1, 0xCE($a0)
    ctx->pc = 0x3360f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 206)));
label_3360fc:
    // 0x3360fc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_336100:
    if (ctx->pc == 0x336100u) {
        ctx->pc = 0x336104u;
        goto label_336104;
    }
    ctx->pc = 0x3360FCu;
    {
        const bool branch_taken_0x3360fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3360fc) {
            ctx->pc = 0x336120u;
            goto label_336120;
        }
    }
    ctx->pc = 0x336104u;
label_336104:
    // 0x336104: 0xc0615a8  jal         func_1856A0
label_336108:
    if (ctx->pc == 0x336108u) {
        ctx->pc = 0x33610Cu;
        goto label_33610c;
    }
    ctx->pc = 0x336104u;
    SET_GPR_U32(ctx, 31, 0x33610Cu);
    ctx->pc = 0x1856A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1856A0u, 0x336104u, 0x33610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33610Cu;
label_33610c:
    // 0x33610c: 0xc061600  jal         func_185800
label_336110:
    if (ctx->pc == 0x336110u) {
        ctx->pc = 0x336110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33610Cu;
        // 0x336110: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336114u;
        goto label_336114;
    }
    ctx->pc = 0x33610Cu;
    SET_GPR_U32(ctx, 31, 0x336114u);
    ctx->pc = 0x336110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33610Cu;
    // 0x336110: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185800u, 0x33610Cu, 0x336114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336114u;
label_336114:
    // 0x336114: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x336114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_336118:
    // 0x336118: 0xc06185c  jal         func_186170
label_33611c:
    if (ctx->pc == 0x33611Cu) {
        ctx->pc = 0x33611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336118u;
        // 0x33611c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336120u;
        goto label_336120;
    }
    ctx->pc = 0x336118u;
    SET_GPR_U32(ctx, 31, 0x336120u);
    ctx->pc = 0x33611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336118u;
    // 0x33611c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186170u, 0x336118u, 0x336120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336120u;
label_336120:
    // 0x336120: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x336120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_336124:
    // 0x336124: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x336124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_336128:
    // 0x336128: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x336128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_33612c:
    // 0x33612c: 0x320f809  jalr        $t9
label_336130:
    if (ctx->pc == 0x336130u) {
        ctx->pc = 0x336134u;
        goto label_336134;
    }
    ctx->pc = 0x33612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x336134u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33612Cu, 0x336134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x336134u;
label_336134:
    // 0x336134: 0x0  nop
    ctx->pc = 0x336134u;
    // NOP
label_336138:
    // 0x336138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33613c:
    // 0x33613c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33613cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_336140:
    // 0x336140: 0x3e00008  jr          $ra
label_336144:
    if (ctx->pc == 0x336144u) {
        ctx->pc = 0x336144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336140u;
        // 0x336144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336148u;
        goto label_fallthrough_0x336140;
    }
    ctx->pc = 0x336140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336140u;
        // 0x336144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x336140:
    ctx->pc = 0x336148u;
}
