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

// Function: sub_003463B0
// Address: 0x3463b0 - 0x3464d0
void sub_003463B0_0x3463b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003463B0_0x3463b0");
#endif

    switch (ctx->pc) {
        case 0x346428u: goto label_346428;
        case 0x346444u: goto label_346444;
        case 0x346498u: goto label_346498;
        default: break;
    }

    ctx->pc = 0x3463b0u;

    // 0x3463b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3463b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3463b4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3463b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3463b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3463b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3463bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3463bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3463c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3463c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3463c4: 0x24637a00  addiu       $v1, $v1, 0x7A00
    ctx->pc = 0x3463c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31232));
    // 0x3463c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3463c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3463cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3463ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3463d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3463d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3463d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3463d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3463d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3463d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3463dc: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x3463dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3463e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3463e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3463e4: 0x27b10074  addiu       $s1, $sp, 0x74
    ctx->pc = 0x3463e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x3463e8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3463e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3463ec: 0x27b00078  addiu       $s0, $sp, 0x78
    ctx->pc = 0x3463ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x3463f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3463f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3463f4: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3463f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3463f8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3463f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3463fc: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3463fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346400: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x346400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346404: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x346404u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x346408: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x346408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x34640c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x34640cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x346410: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x346410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x346414: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x346414u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x657A00u));
    // 0x346418: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x346418u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x34641c: 0xc7b50094  lwc1        $f21, 0x94($sp)
    ctx->pc = 0x34641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x346420: 0xc7b40098  lwc1        $f20, 0x98($sp)
    ctx->pc = 0x346420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x346424: 0x0  nop
    ctx->pc = 0x346424u;
    // NOP
label_346428:
    // 0x346428: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x346428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34642c: 0x1683001a  bne         $s4, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x34642Cu;
    {
        const bool branch_taken_0x34642c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x34642c) {
            ctx->pc = 0x346498u;
            goto label_346498;
        }
    }
    ctx->pc = 0x346434u;
    // 0x346434: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x346434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x346438: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x346438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34643c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x34643Cu;
    {
        const bool branch_taken_0x34643c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x346440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34643Cu;
        // 0x346440: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34643c) {
            ctx->pc = 0x346460u;
            goto label_346460;
        }
    }
    ctx->pc = 0x346444u;
label_346444:
    // 0x346444: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x346444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x346448: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x346448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34644c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34644cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x346450: 0x0  nop
    ctx->pc = 0x346450u;
    // NOP
    // 0x346454: 0x0  nop
    ctx->pc = 0x346454u;
    // NOP
    // 0x346458: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x346458u;
    {
        const bool branch_taken_0x346458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346458) {
            ctx->pc = 0x346444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346444;
        }
    }
    ctx->pc = 0x346460u;
label_346460:
    // 0x346460: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x346460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346464: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x346464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x346468: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x346468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x34646c: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x34646cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x346470: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x346470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x346474: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x346474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x346478: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x346478u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34647c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x34647cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x346480: 0xe6350000  swc1        $f21, 0x0($s1)
    ctx->pc = 0x346480u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x346484: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x346484u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x346488: 0x8f828334  lw          $v0, -0x7CCC($gp)
    ctx->pc = 0x346488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935348)));
    // 0x34648c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x34648cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x346490: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x346490u;
    SET_GPR_U32(ctx, 31, 0x346498u);
    ctx->pc = 0x346494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346490u;
    // 0x346494: 0xaf868334  sw          $a2, -0x7CCC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x346490u, 0x346498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346498u;
label_346498:
    // 0x346498: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x346498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x34649c: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x34649cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3464a0: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3464A0u;
    {
        const bool branch_taken_0x3464a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3464A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3464A0u;
        // 0x3464a4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3464a0) {
            ctx->pc = 0x346428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346428;
        }
    }
    ctx->pc = 0x3464A8u;
    // 0x3464a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3464a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3464ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3464acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3464b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3464b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3464b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3464b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3464b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3464b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3464bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3464bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3464c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3464c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3464c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3464c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3464c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3464C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3464CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3464C8u;
        // 0x3464cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3464C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3464D0u;
}
