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

// Function: sub_002BA2E0
// Address: 0x2ba2e0 - 0x2ba498
void sub_002BA2E0_0x2ba2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA2E0_0x2ba2e0");
#endif

    switch (ctx->pc) {
        case 0x2ba35cu: goto label_2ba35c;
        case 0x2ba380u: goto label_2ba380;
        case 0x2ba38cu: goto label_2ba38c;
        case 0x2ba39cu: goto label_2ba39c;
        case 0x2ba3a8u: goto label_2ba3a8;
        case 0x2ba3f0u: goto label_2ba3f0;
        case 0x2ba400u: goto label_2ba400;
        case 0x2ba414u: goto label_2ba414;
        case 0x2ba44cu: goto label_2ba44c;
        case 0x2ba45cu: goto label_2ba45c;
        case 0x2ba470u: goto label_2ba470;
        default: break;
    }

    ctx->pc = 0x2ba2e0u;

    // 0x2ba2e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ba2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ba2e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ba2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ba2e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ba2e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba2ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ba2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ba2f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ba2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ba2f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ba2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ba2f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ba2fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba300: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ba300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ba304: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ba304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba308: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2ba308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba30c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2ba30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba310: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2ba310u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2ba314: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ba314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba318: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA318u;
    {
        const bool branch_taken_0x2ba318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA318u;
        // 0x2ba31c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba318) {
            ctx->pc = 0x2BA324u;
            goto label_2ba324;
        }
    }
    ctx->pc = 0x2BA320u;
    // 0x2ba320: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ba320u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2ba324:
    // 0x2ba324: 0x3c02433e  lui         $v0, 0x433E
    ctx->pc = 0x2ba324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17214 << 16));
    // 0x2ba328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba32c: 0x0  nop
    ctx->pc = 0x2ba32cu;
    // NOP
    // 0x2ba330: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ba330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba334: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA334u;
    {
        const bool branch_taken_0x2ba334 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA334u;
        // 0x2ba338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba334) {
            ctx->pc = 0x2BA348u;
            goto label_2ba348;
        }
    }
    ctx->pc = 0x2BA33Cu;
    // 0x2ba33c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2BA33Cu;
    {
        const bool branch_taken_0x2ba33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba33c) {
            ctx->pc = 0x2BA478u;
            goto label_2ba478;
        }
    }
    ctx->pc = 0x2BA344u;
    // 0x2ba344: 0x0  nop
    ctx->pc = 0x2ba344u;
    // NOP
label_2ba348:
    // 0x2ba348: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ba348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ba34c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ba34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba350: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ba350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba354: 0xc0ae874  jal         func_2BA1D0
    ctx->pc = 0x2BA354u;
    SET_GPR_U32(ctx, 31, 0x2BA35Cu);
    ctx->pc = 0x2BA358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA354u;
    // 0x2ba358: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA1D0u, 0x2BA354u, 0x2BA35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA35Cu;
label_2ba35c:
    // 0x2ba35c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA35Cu;
    {
        const bool branch_taken_0x2ba35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba35c) {
            ctx->pc = 0x2BA370u;
            goto label_2ba370;
        }
    }
    ctx->pc = 0x2BA364u;
    // 0x2ba364: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2BA364u;
    {
        const bool branch_taken_0x2ba364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA364u;
        // 0x2ba368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba364) {
            ctx->pc = 0x2BA478u;
            goto label_2ba478;
        }
    }
    ctx->pc = 0x2BA36Cu;
    // 0x2ba36c: 0x0  nop
    ctx->pc = 0x2ba36cu;
    // NOP
label_2ba370:
    // 0x2ba370: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ba370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ba374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ba374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba378: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2BA378u;
    SET_GPR_U32(ctx, 31, 0x2BA380u);
    ctx->pc = 0x2BA37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA378u;
    // 0x2ba37c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2BA378u, 0x2BA380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA380u;
label_2ba380:
    // 0x2ba380: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ba380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ba384: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2BA384u;
    SET_GPR_U32(ctx, 31, 0x2BA38Cu);
    ctx->pc = 0x2BA388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA384u;
    // 0x2ba388: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2BA384u, 0x2BA38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA38Cu;
label_2ba38c:
    // 0x2ba38c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ba38cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ba390: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2ba390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ba394: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2BA394u;
    SET_GPR_U32(ctx, 31, 0x2BA39Cu);
    ctx->pc = 0x2BA398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA394u;
    // 0x2ba398: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2BA394u, 0x2BA39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA39Cu;
label_2ba39c:
    // 0x2ba39c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2ba39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ba3a0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BA3A0u;
    {
        const bool branch_taken_0x2ba3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3A0u;
        // 0x2ba3a4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3a0) {
            ctx->pc = 0x2BA3C4u;
            goto label_2ba3c4;
        }
    }
    ctx->pc = 0x2BA3A8u;
label_2ba3a8:
    // 0x2ba3a8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2ba3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ba3ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ba3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ba3b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ba3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ba3b4: 0x0  nop
    ctx->pc = 0x2ba3b4u;
    // NOP
    // 0x2ba3b8: 0x0  nop
    ctx->pc = 0x2ba3b8u;
    // NOP
    // 0x2ba3bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BA3BCu;
    {
        const bool branch_taken_0x2ba3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3bc) {
            ctx->pc = 0x2BA3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba3a8;
        }
    }
    ctx->pc = 0x2BA3C4u;
label_2ba3c4:
    // 0x2ba3c4: 0x27b30098  addiu       $s3, $sp, 0x98
    ctx->pc = 0x2ba3c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2ba3c8: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x2ba3c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2ba3cc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2ba3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba3d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ba3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ba3d4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2ba3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba3d8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ba3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ba3dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ba3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba3e0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ba3e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2ba3e4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2ba3e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ba3e8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2BA3E8u;
    SET_GPR_U32(ctx, 31, 0x2BA3F0u);
    ctx->pc = 0x2BA3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA3E8u;
    // 0x2ba3ec: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2BA3E8u, 0x2BA3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3F0u;
label_2ba3f0:
    // 0x2ba3f0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ba3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ba3f4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ba3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ba3f8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2BA3F8u;
    SET_GPR_U32(ctx, 31, 0x2BA400u);
    ctx->pc = 0x2BA3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA3F8u;
    // 0x2ba3fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2BA3F8u, 0x2BA400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA400u;
label_2ba400:
    // 0x2ba400: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ba400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ba404: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ba404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ba408: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2ba408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ba40c: 0xc0ae874  jal         func_2BA1D0
    ctx->pc = 0x2BA40Cu;
    SET_GPR_U32(ctx, 31, 0x2BA414u);
    ctx->pc = 0x2BA410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA40Cu;
    // 0x2ba410: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA1D0u, 0x2BA40Cu, 0x2BA414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA414u;
label_2ba414:
    // 0x2ba414: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA414u;
    {
        const bool branch_taken_0x2ba414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba414) {
            ctx->pc = 0x2BA428u;
            goto label_2ba428;
        }
    }
    ctx->pc = 0x2BA41Cu;
    // 0x2ba41c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2BA41Cu;
    {
        const bool branch_taken_0x2ba41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA41Cu;
        // 0x2ba420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba41c) {
            ctx->pc = 0x2BA478u;
            goto label_2ba478;
        }
    }
    ctx->pc = 0x2BA424u;
    // 0x2ba424: 0x0  nop
    ctx->pc = 0x2ba424u;
    // NOP
label_2ba428:
    // 0x2ba428: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ba428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba42c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2ba42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba430: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ba430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ba434: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2ba434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba438: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ba438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ba43c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2ba43cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ba440: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ba440u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ba444: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2BA444u;
    SET_GPR_U32(ctx, 31, 0x2BA44Cu);
    ctx->pc = 0x2BA448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA444u;
    // 0x2ba448: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2BA444u, 0x2BA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA44Cu;
label_2ba44c:
    // 0x2ba44c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ba44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba450: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ba450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ba454: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2BA454u;
    SET_GPR_U32(ctx, 31, 0x2BA45Cu);
    ctx->pc = 0x2BA458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA454u;
    // 0x2ba458: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2BA454u, 0x2BA45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA45Cu;
label_2ba45c:
    // 0x2ba45c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ba45cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ba460: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ba460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ba464: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2ba464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ba468: 0xc0ae874  jal         func_2BA1D0
    ctx->pc = 0x2BA468u;
    SET_GPR_U32(ctx, 31, 0x2BA470u);
    ctx->pc = 0x2BA46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA468u;
    // 0x2ba46c: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA1D0u, 0x2BA468u, 0x2BA470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA470u;
label_2ba470:
    // 0x2ba470: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ba470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ba474: 0x0  nop
    ctx->pc = 0x2ba474u;
    // NOP
label_2ba478:
    // 0x2ba478: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ba478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ba47c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ba47cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ba480: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ba480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ba484: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ba484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ba488: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ba488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba48c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ba48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba490: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA490u;
        // 0x2ba494: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA498u;
}
