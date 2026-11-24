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

// Function: sub_003DF220
// Address: 0x3df220 - 0x3df9ac
void sub_003DF220_0x3df220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF220_0x3df220");
#endif

    switch (ctx->pc) {
        case 0x3df2c4u: goto label_3df2c4;
        case 0x3df2d8u: goto label_3df2d8;
        case 0x3df2e8u: goto label_3df2e8;
        case 0x3df32cu: goto label_3df32c;
        case 0x3df340u: goto label_3df340;
        case 0x3df350u: goto label_3df350;
        case 0x3df360u: goto label_3df360;
        case 0x3df374u: goto label_3df374;
        case 0x3df380u: goto label_3df380;
        case 0x3df41cu: goto label_3df41c;
        case 0x3df42cu: goto label_3df42c;
        case 0x3df4b4u: goto label_3df4b4;
        case 0x3df4c4u: goto label_3df4c4;
        case 0x3df4dcu: goto label_3df4dc;
        case 0x3df528u: goto label_3df528;
        case 0x3df5e0u: goto label_3df5e0;
        case 0x3df5f4u: goto label_3df5f4;
        case 0x3df6acu: goto label_3df6ac;
        case 0x3df764u: goto label_3df764;
        case 0x3df76cu: goto label_3df76c;
        case 0x3df784u: goto label_3df784;
        case 0x3df7a8u: goto label_3df7a8;
        case 0x3df824u: goto label_3df824;
        case 0x3df838u: goto label_3df838;
        case 0x3df874u: goto label_3df874;
        case 0x3df88cu: goto label_3df88c;
        case 0x3df8c8u: goto label_3df8c8;
        case 0x3df998u: goto label_3df998;
        default: break;
    }

    ctx->pc = 0x3df220u;

    // 0x3df220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3df220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3df224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3df224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3df228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3df228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3df22c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3df22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3df230: 0x83838ce4  lb          $v1, -0x731C($gp)
    ctx->pc = 0x3df230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937828)));
    // 0x3df234: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3DF234u;
    {
        const bool branch_taken_0x3df234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF234u;
        // 0x3df238: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df234) {
            ctx->pc = 0x3DF260u;
            goto label_3df260;
        }
    }
    ctx->pc = 0x3DF23Cu;
    // 0x3df23c: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x3df23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3df240: 0x3c0345a8  lui         $v1, 0x45A8
    ctx->pc = 0x3df240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17832 << 16));
    // 0x3df244: 0x3464c000  ori         $a0, $v1, 0xC000
    ctx->pc = 0x3df244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x3df248: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3df248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3df24c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3df24cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3df250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3df250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3df254: 0xa3838ce4  sb          $v1, -0x731C($gp)
    ctx->pc = 0x3df254u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937828), (uint8_t)GPR_U32(ctx, 3));
    // 0x3df258: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3df258u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3df25c: 0xe4204830  swc1        $f0, 0x4830($at)
    ctx->pc = 0x3df25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x684830u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x684830u, _value); } while (0); }
label_3df260:
    // 0x3df260: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x3df260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x3df264: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x3df264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x3df268: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3df268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3df26c: 0xae2306c8  sw          $v1, 0x6C8($s1)
    ctx->pc = 0x3df26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 3));
    // 0x3df270: 0x8e2306cc  lw          $v1, 0x6CC($s1)
    ctx->pc = 0x3df270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
    // 0x3df274: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3df274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3df278: 0xae2306cc  sw          $v1, 0x6CC($s1)
    ctx->pc = 0x3df278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 3));
    // 0x3df27c: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3df27cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3df280: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3df280u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3df284: 0x1020019e  beqz        $at, . + 4 + (0x19E << 2)
    ctx->pc = 0x3DF284u;
    {
        const bool branch_taken_0x3df284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF284u;
        // 0x3df288: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df284) {
            ctx->pc = 0x3DF900u;
            goto label_3df900;
        }
    }
    ctx->pc = 0x3DF28Cu;
    // 0x3df28c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3df28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3df290: 0x24844840  addiu       $a0, $a0, 0x4840
    ctx->pc = 0x3df290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18496));
    // 0x3df294: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3df294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3df298: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3df298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3df29c: 0x600008  jr          $v1
    ctx->pc = 0x3DF29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3DF2A8u: goto label_3df2a8;
            case 0x3DF4D0u: goto label_3df4d0;
            case 0x3DF530u: goto label_3df530;
            case 0x3DF740u: goto label_3df740;
            case 0x3DF880u: goto label_3df880;
            case 0x3DF8F8u: goto label_3df8f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF29Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3DF2A4u;
    // 0x3df2a4: 0x0  nop
    ctx->pc = 0x3df2a4u;
    // NOP
label_3df2a8:
    // 0x3df2a8: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3df2a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3df2ac: 0x7e220890  sq          $v0, 0x890($s1)
    ctx->pc = 0x3df2acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2192), GPR_VEC(ctx, 2));
    // 0x3df2b0: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3df2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x3df2b4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF2B4u;
    {
        const bool branch_taken_0x3df2b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2B4u;
        // 0x3df2b8: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df2b4) {
            ctx->pc = 0x3DF2C8u;
            goto label_3df2c8;
        }
    }
    ctx->pc = 0x3DF2BCu;
    // 0x3df2bc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3DF2BCu;
    SET_GPR_U32(ctx, 31, 0x3DF2C4u);
    ctx->pc = 0x3DF2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF2BCu;
    // 0x3df2c0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3DF2BCu, 0x3DF2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF2C4u;
label_3df2c4:
    // 0x3df2c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3df2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3df2c8:
    // 0x3df2c8: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x3DF2C8u;
    {
        const bool branch_taken_0x3df2c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2C8u;
        // 0x3df2cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df2c8) {
            ctx->pc = 0x3DF308u;
            goto label_3df308;
        }
    }
    ctx->pc = 0x3DF2D0u;
    // 0x3df2d0: 0xc0a7330  jal         func_29CCC0
    ctx->pc = 0x3DF2D0u;
    SET_GPR_U32(ctx, 31, 0x3DF2D8u);
    ctx->pc = 0x29CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CCC0u, 0x3DF2D0u, 0x3DF2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF2D8u;
label_3df2d8:
    // 0x3df2d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3df2d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3df2dc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3DF2DCu;
    {
        const bool branch_taken_0x3df2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2DCu;
        // 0x3df2e0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df2dc) {
            ctx->pc = 0x3DF308u;
            goto label_3df308;
        }
    }
    ctx->pc = 0x3DF2E4u;
    // 0x3df2e4: 0x0  nop
    ctx->pc = 0x3df2e4u;
    // NOP
label_3df2e8:
    // 0x3df2e8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x3df2e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3df2ec: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DF2ECu;
    {
        const bool branch_taken_0x3df2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3DF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2ECu;
        // 0x3df2f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df2ec) {
            ctx->pc = 0x3DF308u;
            goto label_3df308;
        }
    }
    ctx->pc = 0x3DF2F4u;
    // 0x3df2f4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3df2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3df2f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3df2f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3df2fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3DF2FCu;
    {
        const bool branch_taken_0x3df2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3df2fc) {
            ctx->pc = 0x3DF2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df2e8;
        }
    }
    ctx->pc = 0x3DF304u;
    // 0x3df304: 0x0  nop
    ctx->pc = 0x3df304u;
    // NOP
label_3df308:
    // 0x3df308: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3df308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3df30c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3df30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3df310: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3df310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3df314: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3df314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3df318: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3df318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3df31c: 0x784200b0  lq          $v0, 0xB0($v0)
    ctx->pc = 0x3df31cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x3df320: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3df320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3df324: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3DF324u;
    SET_GPR_U32(ctx, 31, 0x3DF32Cu);
    ctx->pc = 0x3DF328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF324u;
    // 0x3df328: 0x7e220880  sq          $v0, 0x880($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 2176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3DF324u, 0x3DF32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF32Cu;
label_3df32c:
    // 0x3df32c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3df32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x3df330: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3df330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3df334: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3df334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3df338: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x3DF338u;
    SET_GPR_U32(ctx, 31, 0x3DF340u);
    ctx->pc = 0x3DF33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF338u;
    // 0x3df33c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x3DF338u, 0x3DF340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF340u;
label_3df340:
    // 0x3df340: 0x26240870  addiu       $a0, $s1, 0x870
    ctx->pc = 0x3df340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    // 0x3df344: 0x26250880  addiu       $a1, $s1, 0x880
    ctx->pc = 0x3df344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2176));
    // 0x3df348: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3DF348u;
    SET_GPR_U32(ctx, 31, 0x3DF350u);
    ctx->pc = 0x3DF34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF348u;
    // 0x3df34c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3DF348u, 0x3DF350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF350u;
label_3df350:
    // 0x3df350: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3df350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3df354: 0x26250890  addiu       $a1, $s1, 0x890
    ctx->pc = 0x3df354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x3df358: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3DF358u;
    SET_GPR_U32(ctx, 31, 0x3DF360u);
    ctx->pc = 0x3DF35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF358u;
    // 0x3df35c: 0x26260870  addiu       $a2, $s1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3DF358u, 0x3DF360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF360u;
label_3df360:
    // 0x3df360: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3df360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3df364: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x3df364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3df368: 0xc42c4830  lwc1        $f12, 0x4830($at)
    ctx->pc = 0x3df368u;
    { uint32_t bits = FAST_READ32(0x684830u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3df36c: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x3DF36Cu;
    SET_GPR_U32(ctx, 31, 0x3DF374u);
    ctx->pc = 0x3DF370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF36Cu;
    // 0x3df370: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x3DF36Cu, 0x3DF374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF374u;
label_3df374:
    // 0x3df374: 0x26240870  addiu       $a0, $s1, 0x870
    ctx->pc = 0x3df374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    // 0x3df378: 0xc096988  jal         func_25A620
    ctx->pc = 0x3DF378u;
    SET_GPR_U32(ctx, 31, 0x3DF380u);
    ctx->pc = 0x3DF37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF378u;
    // 0x3df37c: 0x26250890  addiu       $a1, $s1, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3DF378u, 0x3DF380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF380u;
label_3df380:
    // 0x3df380: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3df380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3df384: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3df384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3df388: 0xc4224830  lwc1        $f2, 0x4830($at)
    ctx->pc = 0x3df388u;
    { uint32_t bits = FAST_READ32(0x684830u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3df38c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3df38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3df390: 0x0  nop
    ctx->pc = 0x3df390u;
    // NOP
    // 0x3df394: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3df394u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3df398: 0x0  nop
    ctx->pc = 0x3df398u;
    // NOP
    // 0x3df39c: 0x0  nop
    ctx->pc = 0x3df39cu;
    // NOP
    // 0x3df3a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3df3a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3df3a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DF3A4u;
    {
        const bool branch_taken_0x3df3a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df3a4) {
            ctx->pc = 0x3DF3BCu;
            goto label_3df3bc;
        }
    }
    ctx->pc = 0x3DF3ACu;
    // 0x3df3ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df3acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3df3b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3df3b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3df3b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DF3B4u;
    {
        const bool branch_taken_0x3df3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF3B4u;
        // 0x3df3b8: 0xa6230828  sh          $v1, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df3b4) {
            ctx->pc = 0x3DF3D8u;
            goto label_3df3d8;
        }
    }
    ctx->pc = 0x3DF3BCu;
label_3df3bc:
    // 0x3df3bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3df3bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3df3c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3df3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3df3c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df3c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3df3c8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3df3c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3df3cc: 0x0  nop
    ctx->pc = 0x3df3ccu;
    // NOP
    // 0x3df3d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3df3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3df3d4: 0xa6230828  sh          $v1, 0x828($s1)
    ctx->pc = 0x3df3d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
label_3df3d8:
    // 0x3df3d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3df3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3df3dc: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3df3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3df3e0: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x3df3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3df3e4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x3df3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3df3e8: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3df3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3df3ec: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x3df3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3df3f0: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x3df3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x3df3f4: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3df3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3df3f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3df3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3df3fc: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x3df3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x3df400: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3df400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3df404: 0x7a220870  lq          $v0, 0x870($s1)
    ctx->pc = 0x3df404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 2160)));
    // 0x3df408: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3df408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df40c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3df40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3df410: 0x7a220870  lq          $v0, 0x870($s1)
    ctx->pc = 0x3df410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 2160)));
    // 0x3df414: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x3DF414u;
    SET_GPR_U32(ctx, 31, 0x3DF41Cu);
    ctx->pc = 0x3DF418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF414u;
    // 0x3df418: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x3DF414u, 0x3DF41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF41Cu;
label_3df41c:
    // 0x3df41c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3df41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3df420: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3df420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3df424: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3DF424u;
    SET_GPR_U32(ctx, 31, 0x3DF42Cu);
    ctx->pc = 0x3DF428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF424u;
    // 0x3df428: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3DF424u, 0x3DF42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF42Cu;
label_3df42c:
    // 0x3df42c: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x3df42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x3df430: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x3df430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3df434: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3df434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3df438: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x3df438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x3df43c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3df43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3df440: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x3df440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3df444: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3df444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3df448: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3df448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3df44c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3df44cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3df450: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3df450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3df454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3df454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3df458: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x3df458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3df45c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3df45cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3df460: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x3df460u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x3df464: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x3df464u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x3df468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3df468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3df46c: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x3df46cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3df470: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3df470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3df474: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DF474u;
    {
        const bool branch_taken_0x3df474 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF474u;
        // 0x3df478: 0xe7a30044  swc1        $f3, 0x44($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df474) {
            ctx->pc = 0x3DF48Cu;
            goto label_3df48c;
        }
    }
    ctx->pc = 0x3DF47Cu;
    // 0x3df47c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df47cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3df480: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3df480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3df484: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DF484u;
    {
        const bool branch_taken_0x3df484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF484u;
        // 0x3df488: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df484) {
            ctx->pc = 0x3DF4A8u;
            goto label_3df4a8;
        }
    }
    ctx->pc = 0x3DF48Cu;
label_3df48c:
    // 0x3df48c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3df48cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3df490: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3df490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3df494: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3df498: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3df498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3df49c: 0x0  nop
    ctx->pc = 0x3df49cu;
    // NOP
    // 0x3df4a0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3df4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3df4a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3df4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3df4a8:
    // 0x3df4a8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3df4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3df4ac: 0xc063efc  jal         func_18FBF0
    ctx->pc = 0x3DF4ACu;
    SET_GPR_U32(ctx, 31, 0x3DF4B4u);
    ctx->pc = 0x3DF4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF4ACu;
    // 0x3df4b0: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FBF0u, 0x3DF4ACu, 0x3DF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF4B4u;
label_3df4b4:
    // 0x3df4b4: 0xa6202aca  sh          $zero, 0x2ACA($s1)
    ctx->pc = 0x3df4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10954), (uint16_t)GPR_U32(ctx, 0));
    // 0x3df4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3df4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3df4bc: 0xc0f8564  jal         func_3E1590
    ctx->pc = 0x3DF4BCu;
    SET_GPR_U32(ctx, 31, 0x3DF4C4u);
    ctx->pc = 0x3DF4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF4BCu;
    // 0x3df4c0: 0xa2220821  sb          $v0, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1590u, 0x3DF4BCu, 0x3DF4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF4C4u;
label_3df4c4:
    // 0x3df4c4: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x3DF4C4u;
    {
        const bool branch_taken_0x3df4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df4c4) {
            ctx->pc = 0x3DF900u;
            goto label_3df900;
        }
    }
    ctx->pc = 0x3DF4CCu;
    // 0x3df4cc: 0x0  nop
    ctx->pc = 0x3df4ccu;
    // NOP
label_3df4d0:
    // 0x3df4d0: 0x26240890  addiu       $a0, $s1, 0x890
    ctx->pc = 0x3df4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x3df4d4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3DF4D4u;
    SET_GPR_U32(ctx, 31, 0x3DF4DCu);
    ctx->pc = 0x3DF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF4D4u;
    // 0x3df4d8: 0x26250870  addiu       $a1, $s1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3DF4D4u, 0x3DF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF4DCu;
label_3df4dc:
    // 0x3df4dc: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3df4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3df4e0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3df4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3df4e4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3df4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3df4e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3df4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3df4ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3df4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3df4f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df4f4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3df4f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3df4f8: 0x26250870  addiu       $a1, $s1, 0x870
    ctx->pc = 0x3df4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    // 0x3df4fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3df4fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df500: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3df500u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3df504: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df504u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3df508: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3df508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3df50c: 0x0  nop
    ctx->pc = 0x3df50cu;
    // NOP
    // 0x3df510: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3df510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3df514: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3df514u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3df518: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3df518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3df51c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x3df51cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3df520: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3DF520u;
    SET_GPR_U32(ctx, 31, 0x3DF528u);
    ctx->pc = 0x3DF524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF520u;
    // 0x3df524: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3DF520u, 0x3DF528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF528u;
label_3df528:
    // 0x3df528: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3df528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3df52c: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x3df52cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
label_3df530:
    // 0x3df530: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3df530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3df534: 0x96242aca  lhu         $a0, 0x2ACA($s1)
    ctx->pc = 0x3df534u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10954)));
    // 0x3df538: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x3df538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x3df53c: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x3df53cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3df540: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x3DF540u;
    {
        const bool branch_taken_0x3df540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df540) {
            ctx->pc = 0x3DF5E8u;
            goto label_3df5e8;
        }
    }
    ctx->pc = 0x3DF548u;
    // 0x3df548: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF548u;
    {
        const bool branch_taken_0x3df548 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3DF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF548u;
        // 0x3df54c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df548) {
            ctx->pc = 0x3DF55Cu;
            goto label_3df55c;
        }
    }
    ctx->pc = 0x3DF550u;
    // 0x3df550: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3df550u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3df554: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DF554u;
    {
        const bool branch_taken_0x3df554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF554u;
        // 0x3df558: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df554) {
            ctx->pc = 0x3DF574u;
            goto label_3df574;
        }
    }
    ctx->pc = 0x3DF55Cu;
label_3df55c:
    // 0x3df55c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3df55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3df560: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3df560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3df564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3df564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3df568: 0x0  nop
    ctx->pc = 0x3df568u;
    // NOP
    // 0x3df56c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3df56cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3df570: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3df570u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3df574:
    // 0x3df574: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3df574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3df578: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x3df578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x3df57c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3df57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3df580: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3df580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3df584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3df584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3df588: 0x0  nop
    ctx->pc = 0x3df588u;
    // NOP
    // 0x3df58c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3df58cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3df590: 0x0  nop
    ctx->pc = 0x3df590u;
    // NOP
    // 0x3df594: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x3df594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3df598: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3df598u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3df59c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DF59Cu;
    {
        const bool branch_taken_0x3df59c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df59c) {
            ctx->pc = 0x3DF5B4u;
            goto label_3df5b4;
        }
    }
    ctx->pc = 0x3DF5A4u;
    // 0x3df5a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df5a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3df5a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3df5a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3df5ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DF5ACu;
    {
        const bool branch_taken_0x3df5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF5ACu;
        // 0x3df5b0: 0xa6232aca  sh          $v1, 0x2ACA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10954), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df5ac) {
            ctx->pc = 0x3DF5D0u;
            goto label_3df5d0;
        }
    }
    ctx->pc = 0x3DF5B4u;
label_3df5b4:
    // 0x3df5b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3df5b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3df5b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3df5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3df5bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df5bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3df5c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3df5c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3df5c4: 0x0  nop
    ctx->pc = 0x3df5c4u;
    // NOP
    // 0x3df5c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3df5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3df5cc: 0xa6232aca  sh          $v1, 0x2ACA($s1)
    ctx->pc = 0x3df5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10954), (uint16_t)GPR_U32(ctx, 3));
label_3df5d0:
    // 0x3df5d0: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3df5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3df5d4: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x3df5d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x3df5d8: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3DF5D8u;
    SET_GPR_U32(ctx, 31, 0x3DF5E0u);
    ctx->pc = 0x3DF5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF5D8u;
    // 0x3df5dc: 0x96252acc  lhu         $a1, 0x2ACC($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3DF5D8u, 0x3DF5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF5E0u;
label_3df5e0:
    // 0x3df5e0: 0xa6222aca  sh          $v0, 0x2ACA($s1)
    ctx->pc = 0x3df5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10954), (uint16_t)GPR_U32(ctx, 2));
    // 0x3df5e4: 0x0  nop
    ctx->pc = 0x3df5e4u;
    // NOP
label_3df5e8:
    // 0x3df5e8: 0x26240890  addiu       $a0, $s1, 0x890
    ctx->pc = 0x3df5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x3df5ec: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3DF5ECu;
    SET_GPR_U32(ctx, 31, 0x3DF5F4u);
    ctx->pc = 0x3DF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF5ECu;
    // 0x3df5f0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3DF5ECu, 0x3DF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF5F4u;
label_3df5f4:
    // 0x3df5f4: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x3df5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x3df5f8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3df5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3df5fc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3df5fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3df600: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3df600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3df604: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3df604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3df608: 0x0  nop
    ctx->pc = 0x3df608u;
    // NOP
    // 0x3df60c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3df60cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3df610: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3df610u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3df614: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df614u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3df618: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3df618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3df61c: 0x0  nop
    ctx->pc = 0x3df61cu;
    // NOP
    // 0x3df620: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3df620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3df624: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3df624u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3df628: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3df628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3df62c: 0xa62300c2  sh          $v1, 0xC2($s1)
    ctx->pc = 0x3df62cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x3df630: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3df630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x3df634: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x3DF634u;
    {
        const bool branch_taken_0x3df634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df634) {
            ctx->pc = 0x3DF900u;
            goto label_3df900;
        }
    }
    ctx->pc = 0x3DF63Cu;
    // 0x3df63c: 0xa620082a  sh          $zero, 0x82A($s1)
    ctx->pc = 0x3df63cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x3df640: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3df640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3df644: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3df644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3df648: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3df648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3df64c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3df64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3df650: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3df650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3df654: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3df654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3df658: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3df658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3df65c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3df65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3df660: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3df660u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3df664: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3df664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3df668: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3df668u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3df66c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DF66Cu;
    {
        const bool branch_taken_0x3df66c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df66c) {
            ctx->pc = 0x3DF684u;
            goto label_3df684;
        }
    }
    ctx->pc = 0x3DF674u;
    // 0x3df674: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df674u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3df678: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3df678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3df67c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DF67Cu;
    {
        const bool branch_taken_0x3df67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF67Cu;
        // 0x3df680: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df67c) {
            ctx->pc = 0x3DF6A0u;
            goto label_3df6a0;
        }
    }
    ctx->pc = 0x3DF684u;
label_3df684:
    // 0x3df684: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3df684u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3df688: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3df688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3df68c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df68cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3df690: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3df690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3df694: 0x0  nop
    ctx->pc = 0x3df694u;
    // NOP
    // 0x3df698: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3df698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3df69c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x3df69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3df6a0:
    // 0x3df6a0: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x3df6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x3df6a4: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x3DF6A4u;
    SET_GPR_U32(ctx, 31, 0x3DF6ACu);
    ctx->pc = 0x3DF6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF6A4u;
    // 0x3df6a8: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x3DF6A4u, 0x3DF6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF6ACu;
label_3df6ac:
    // 0x3df6ac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3df6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3df6b0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3df6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3df6b4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3df6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3df6b8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3df6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3df6bc: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3df6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3df6c0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3df6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3df6c4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3df6c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3df6c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3df6c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3df6cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3df6ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3df6d0: 0x0  nop
    ctx->pc = 0x3df6d0u;
    // NOP
    // 0x3df6d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3df6d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3df6d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3df6d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3df6dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DF6DCu;
    {
        const bool branch_taken_0x3df6dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df6dc) {
            ctx->pc = 0x3DF6F4u;
            goto label_3df6f4;
        }
    }
    ctx->pc = 0x3DF6E4u;
    // 0x3df6e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df6e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3df6e8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3df6e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3df6ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DF6ECu;
    {
        const bool branch_taken_0x3df6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF6ECu;
        // 0x3df6f0: 0xa6240826  sh          $a0, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df6ec) {
            ctx->pc = 0x3DF710u;
            goto label_3df710;
        }
    }
    ctx->pc = 0x3DF6F4u;
label_3df6f4:
    // 0x3df6f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3df6f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3df6f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3df6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3df6fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df6fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3df700: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3df700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3df704: 0x0  nop
    ctx->pc = 0x3df704u;
    // NOP
    // 0x3df708: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3df708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3df70c: 0xa6240826  sh          $a0, 0x826($s1)
    ctx->pc = 0x3df70cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 4));
label_3df710:
    // 0x3df710: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x3df710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3df714: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3df714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3df718: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3df718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3df71c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3df71cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3df720: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x3df720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x3df724: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x3df724u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3df728: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x3df728u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3df72c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3df72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3df730: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x3df730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x3df734: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3DF734u;
    {
        const bool branch_taken_0x3df734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF734u;
        // 0x3df738: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df734) {
            ctx->pc = 0x3DF900u;
            goto label_3df900;
        }
    }
    ctx->pc = 0x3DF73Cu;
    // 0x3df73c: 0x0  nop
    ctx->pc = 0x3df73cu;
    // NOP
label_3df740:
    // 0x3df740: 0x9622082a  lhu         $v0, 0x82A($s1)
    ctx->pc = 0x3df740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3df744: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3DF744u;
    {
        const bool branch_taken_0x3df744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3df744) {
            ctx->pc = 0x3DF790u;
            goto label_3df790;
        }
    }
    ctx->pc = 0x3DF74Cu;
    // 0x3df74c: 0x8e2206ac  lw          $v0, 0x6AC($s1)
    ctx->pc = 0x3df74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x3df750: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3df750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3df754: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3DF754u;
    {
        const bool branch_taken_0x3df754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF754u;
        // 0x3df758: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df754) {
            ctx->pc = 0x3DF790u;
            goto label_3df790;
        }
    }
    ctx->pc = 0x3DF75Cu;
    // 0x3df75c: 0xc0b2d94  jal         func_2CB650
    ctx->pc = 0x3DF75Cu;
    SET_GPR_U32(ctx, 31, 0x3DF764u);
    ctx->pc = 0x2CB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB650u, 0x3DF75Cu, 0x3DF764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF764u;
label_3df764:
    // 0x3df764: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3DF764u;
    SET_GPR_U32(ctx, 31, 0x3DF76Cu);
    ctx->pc = 0x3DF768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF764u;
    // 0x3df768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3DF764u, 0x3DF76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF76Cu;
label_3df76c:
    // 0x3df76c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3df76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df770: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x3df770u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x3df774: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3df774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x3df778: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3df778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3df77c: 0xc0a8fa0  jal         func_2A3E80
    ctx->pc = 0x3DF77Cu;
    SET_GPR_U32(ctx, 31, 0x3DF784u);
    ctx->pc = 0x3DF780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF77Cu;
    // 0x3df780: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3E80u, 0x3DF77Cu, 0x3DF784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF784u;
label_3df784:
    // 0x3df784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3df784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3df788: 0xa622082a  sh          $v0, 0x82A($s1)
    ctx->pc = 0x3df788u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 2));
    // 0x3df78c: 0x0  nop
    ctx->pc = 0x3df78cu;
    // NOP
label_3df790:
    // 0x3df790: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x3df790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x3df794: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3df794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3df798: 0xa6222aca  sh          $v0, 0x2ACA($s1)
    ctx->pc = 0x3df798u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10954), (uint16_t)GPR_U32(ctx, 2));
    // 0x3df79c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3df79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df7a0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3DF7A0u;
    SET_GPR_U32(ctx, 31, 0x3DF7A8u);
    ctx->pc = 0x3DF7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF7A0u;
    // 0x3df7a4: 0x26260090  addiu       $a2, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3DF7A0u, 0x3DF7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF7A8u;
label_3df7a8:
    // 0x3df7a8: 0x96230828  lhu         $v1, 0x828($s1)
    ctx->pc = 0x3df7a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x3df7ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF7ACu;
    {
        const bool branch_taken_0x3df7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df7ac) {
            ctx->pc = 0x3DF7C0u;
            goto label_3df7c0;
        }
    }
    ctx->pc = 0x3DF7B4u;
    // 0x3df7b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3df7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3df7b8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x3DF7B8u;
    {
        const bool branch_taken_0x3df7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7B8u;
        // 0x3df7bc: 0xa6230828  sh          $v1, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df7b8) {
            ctx->pc = 0x3DF900u;
            goto label_3df900;
        }
    }
    ctx->pc = 0x3DF7C0u;
label_3df7c0:
    // 0x3df7c0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x3df7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x3df7c4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3df7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3df7c8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3df7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3df7cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3df7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3df7d0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3df7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3df7d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3df7d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3df7d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3df7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3df7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3df7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3df7e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3df7e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3df7e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3df7e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3df7e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3df7e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3df7ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DF7ECu;
    {
        const bool branch_taken_0x3df7ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df7ec) {
            ctx->pc = 0x3DF804u;
            goto label_3df804;
        }
    }
    ctx->pc = 0x3DF7F4u;
    // 0x3df7f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df7f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3df7f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3df7f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3df7fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DF7FCu;
    {
        const bool branch_taken_0x3df7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df7fc) {
            ctx->pc = 0x3DF81Cu;
            goto label_3df81c;
        }
    }
    ctx->pc = 0x3DF804u;
label_3df804:
    // 0x3df804: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3df804u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3df808: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3df808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3df80c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3df80cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3df810: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3df810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3df814: 0x0  nop
    ctx->pc = 0x3df814u;
    // NOP
    // 0x3df818: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3df818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3df81c:
    // 0x3df81c: 0xc0ad00c  jal         func_2B4030
    ctx->pc = 0x3DF81Cu;
    SET_GPR_U32(ctx, 31, 0x3DF824u);
    ctx->pc = 0x2B4030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4030u, 0x3DF81Cu, 0x3DF824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF824u;
label_3df824:
    // 0x3df824: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3df824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3df828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3df828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df82c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x3df82cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x3df830: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x3DF830u;
    SET_GPR_U32(ctx, 31, 0x3DF838u);
    ctx->pc = 0x3DF834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF830u;
    // 0x3df834: 0x2444fb00  addiu       $a0, $v0, -0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x3DF830u, 0x3DF838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF838u;
label_3df838:
    // 0x3df838: 0x8e2629c0  lw          $a2, 0x29C0($s1)
    ctx->pc = 0x3df838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3df83c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3df83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3df840: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x3df840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x3df844: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x3df844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x3df848: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3df848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3df84c: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3df84cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3df850: 0x7a220890  lq          $v0, 0x890($s1)
    ctx->pc = 0x3df850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 2192)));
    // 0x3df854: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3df854u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x3df858: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3df858u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3df85c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3df85cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3df860: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x3df860u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3df864: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3df864u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3df868: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x3df868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x3df86c: 0xc0f8570  jal         func_3E15C0
    ctx->pc = 0x3DF86Cu;
    SET_GPR_U32(ctx, 31, 0x3DF874u);
    ctx->pc = 0x3DF870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF86Cu;
    // 0x3df870: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E15C0u, 0x3DF86Cu, 0x3DF874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF874u;
label_3df874:
    // 0x3df874: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3DF874u;
    {
        const bool branch_taken_0x3df874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df874) {
            ctx->pc = 0x3DF900u;
            goto label_3df900;
        }
    }
    ctx->pc = 0x3DF87Cu;
    // 0x3df87c: 0x0  nop
    ctx->pc = 0x3df87cu;
    // NOP
label_3df880:
    // 0x3df880: 0x26240880  addiu       $a0, $s1, 0x880
    ctx->pc = 0x3df880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2176));
    // 0x3df884: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3DF884u;
    SET_GPR_U32(ctx, 31, 0x3DF88Cu);
    ctx->pc = 0x3DF888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF884u;
    // 0x3df888: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3DF884u, 0x3DF88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF88Cu;
label_3df88c:
    // 0x3df88c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3df88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3df890: 0xe420fe40  swc1        $f0, -0x1C0($at)
    ctx->pc = 0x3df890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FE40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE40u, _value); } while (0); }
    // 0x3df894: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3df894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3df898: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x3df898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FE84u));
    // 0x3df89c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3df89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3df8a0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3df8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3df8a4: 0xac23fe84  sw          $v1, -0x17C($at)
    ctx->pc = 0x3df8a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x3df8a8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3df8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x3df8ac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DF8ACu;
    {
        const bool branch_taken_0x3df8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df8ac) {
            ctx->pc = 0x3DF900u;
            goto label_3df900;
        }
    }
    ctx->pc = 0x3DF8B4u;
    // 0x3df8b4: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x3df8b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3df8b8: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x3df8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x3df8bc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3df8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3df8c0: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3DF8C0u;
    SET_GPR_U32(ctx, 31, 0x3DF8C8u);
    ctx->pc = 0x3DF8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF8C0u;
    // 0x3df8c4: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3DF8C0u, 0x3DF8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF8C8u;
label_3df8c8:
    // 0x3df8c8: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x3df8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3df8cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3df8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3df8d0: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3df8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3df8d4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3df8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3df8d8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3df8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3df8dc: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3df8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3df8e0: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x3df8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3df8e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3df8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3df8e8: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3df8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3df8ec: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x3df8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x3df8f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DF8F0u;
    {
        const bool branch_taken_0x3df8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF8F0u;
        // 0x3df8f4: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df8f0) {
            ctx->pc = 0x3DF900u;
            goto label_3df900;
        }
    }
    ctx->pc = 0x3DF8F8u;
label_3df8f8:
    // 0x3df8f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3df8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3df8fc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3df8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3df900:
    // 0x3df900: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3df900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3df904: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3df904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3df908: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DF908u;
    {
        const bool branch_taken_0x3df908 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df908) {
            ctx->pc = 0x3DF950u;
            goto label_3df950;
        }
    }
    ctx->pc = 0x3DF910u;
    // 0x3df910: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x3df910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x3df914: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x3df914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x3df918: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x3df918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x3df91c: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x3df91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x3df920: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3df920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3df924: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x3df924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x3df928: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x3df928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x3df92c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3df92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3df930: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x3df930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x3df934: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x3df934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x3df938: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3df938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3df93c: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x3df93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x3df940: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x3df940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x3df944: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3df944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3df948: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x3df948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x3df94c: 0x0  nop
    ctx->pc = 0x3df94cu;
    // NOP
label_3df950:
    // 0x3df950: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3df950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3df954: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3df954u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3df958: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x3DF958u;
    {
        const bool branch_taken_0x3df958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df958) {
            ctx->pc = 0x3DF998u;
            goto label_3df998;
        }
    }
    ctx->pc = 0x3DF960u;
    // 0x3df960: 0x87868458  lh          $a2, -0x7BA8($gp)
    ctx->pc = 0x3df960u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935640)));
    // 0x3df964: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x3df964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x3df968: 0x9384845a  lbu         $a0, -0x7BA6($gp)
    ctx->pc = 0x3df968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935642)));
    // 0x3df96c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3df96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3df970: 0x3c028432  lui         $v0, 0x8432
    ctx->pc = 0x3df970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33842 << 16));
    // 0x3df974: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3df974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3df978: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x3df978u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3df97c: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x3df97cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3df980: 0x922408e8  lbu         $a0, 0x8E8($s1)
    ctx->pc = 0x3df980u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x3df984: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x3df984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x3df988: 0x9084006c  lbu         $a0, 0x6C($a0)
    ctx->pc = 0x3df988u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x3df98c: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x3df98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3df990: 0xc0b2d24  jal         func_2CB490
    ctx->pc = 0x3DF990u;
    SET_GPR_U32(ctx, 31, 0x3DF998u);
    ctx->pc = 0x3DF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF990u;
    // 0x3df994: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB490u, 0x3DF990u, 0x3DF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF998u;
label_3df998:
    // 0x3df998: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3df998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3df99c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3df99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3df9a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3df9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3df9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9A4u;
        // 0x3df9a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF9ACu;
}
