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

// Function: sub_0035A790
// Address: 0x35a790 - 0x35a97c
void sub_0035A790_0x35a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A790_0x35a790");
#endif

    switch (ctx->pc) {
        case 0x35a838u: goto label_35a838;
        case 0x35a84cu: goto label_35a84c;
        case 0x35a854u: goto label_35a854;
        case 0x35a8b8u: goto label_35a8b8;
        case 0x35a91cu: goto label_35a91c;
        case 0x35a938u: goto label_35a938;
        case 0x35a948u: goto label_35a948;
        default: break;
    }

    ctx->pc = 0x35a790u;

    // 0x35a790: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x35a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x35a794: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x35a794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x35a798: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x35a798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x35a79c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x35a79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x35a7a0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x35a7a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a7a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x35a7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x35a7a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35a7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x35a7ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x35a7b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35a7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x35a7b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35a7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35a7b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35a7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35a7bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a7c0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x35a7c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x35a7c4: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x35a7c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x35a7c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35a7c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35a7cc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x35a7ccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x35a7d0: 0x8c8600c8  lw          $a2, 0xC8($a0)
    ctx->pc = 0x35a7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x35a7d4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x35a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x35a7d8: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x35a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35a7dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x35a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a7e0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x35a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35a7e4: 0x3a180  sll         $s4, $v1, 6
    ctx->pc = 0x35a7e4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x35a7e8: 0x2862821  addu        $a1, $s4, $a2
    ctx->pc = 0x35a7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x35a7ec: 0x84a4052e  lh          $a0, 0x52E($a1)
    ctx->pc = 0x35a7ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1326)));
    // 0x35a7f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35A7F0u;
    {
        const bool branch_taken_0x35a7f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A7F0u;
        // 0x35a7f4: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a7f0) {
            ctx->pc = 0x35A808u;
            goto label_35a808;
        }
    }
    ctx->pc = 0x35A7F8u;
    // 0x35a7f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a7fc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35A7FCu;
    {
        const bool branch_taken_0x35a7fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35a7fc) {
            ctx->pc = 0x35A818u;
            goto label_35a818;
        }
    }
    ctx->pc = 0x35A804u;
    // 0x35a804: 0x0  nop
    ctx->pc = 0x35a804u;
    // NOP
label_35a808:
    // 0x35a808: 0x7ae30090  lq          $v1, 0x90($s7)
    ctx->pc = 0x35a808u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 144)));
    // 0x35a80c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x35A80Cu;
    {
        const bool branch_taken_0x35a80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A80Cu;
        // 0x35a810: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a80c) {
            ctx->pc = 0x35A948u;
            goto label_35a948;
        }
    }
    ctx->pc = 0x35A814u;
    // 0x35a814: 0x0  nop
    ctx->pc = 0x35a814u;
    // NOP
label_35a818:
    // 0x35a818: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x35a818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x35a81c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x35a81cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x35a820: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x35a820u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35a824: 0x24b50140  addiu       $s5, $a1, 0x140
    ctx->pc = 0x35a824u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x35a828: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x35A828u;
    {
        const bool branch_taken_0x35a828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A828u;
        // 0x35a82c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a828) {
            ctx->pc = 0x35A898u;
            goto label_35a898;
        }
    }
    ctx->pc = 0x35A830u;
    // 0x35a830: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x35a830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a834: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x35a834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_35a838:
    // 0x35a838: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x35a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35a83c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35a840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35a840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a844: 0xc076664  jal         func_1D9990
    ctx->pc = 0x35A844u;
    SET_GPR_U32(ctx, 31, 0x35A84Cu);
    ctx->pc = 0x35A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A844u;
    // 0x35a848: 0x2a22821  addu        $a1, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x35A844u, 0x35A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A84Cu;
label_35a84c:
    // 0x35a84c: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x35A84Cu;
    SET_GPR_U32(ctx, 31, 0x35A854u);
    ctx->pc = 0x35A850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A84Cu;
    // 0x35a850: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x35A84Cu, 0x35A854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A854u;
label_35a854:
    // 0x35a854: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x35a854u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x35a858: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35A858u;
    {
        const bool branch_taken_0x35a858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A858u;
        // 0x35a85c: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a858) {
            ctx->pc = 0x35A870u;
            goto label_35a870;
        }
    }
    ctx->pc = 0x35A860u;
    // 0x35a860: 0xc641fffc  lwc1        $f1, -0x4($s2)
    ctx->pc = 0x35a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a864: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35a864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35a868: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x35a868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x35a86c: 0x0  nop
    ctx->pc = 0x35a86cu;
    // NOP
label_35a870:
    // 0x35a870: 0x8ee600c8  lw          $a2, 0xC8($s7)
    ctx->pc = 0x35a870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 200)));
    // 0x35a874: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35a878: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x35a878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x35a87c: 0x2861021  addu        $v0, $s4, $a2
    ctx->pc = 0x35a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x35a880: 0x8442052e  lh          $v0, 0x52E($v0)
    ctx->pc = 0x35a880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1326)));
    // 0x35a884: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35a888: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x35a888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35a88c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x35A88Cu;
    {
        const bool branch_taken_0x35a88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A88Cu;
        // 0x35a890: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a88c) {
            ctx->pc = 0x35A838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a838;
        }
    }
    ctx->pc = 0x35A894u;
    // 0x35a894: 0x0  nop
    ctx->pc = 0x35a894u;
    // NOP
label_35a898:
    // 0x35a898: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x35a898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x35a89c: 0x8462052e  lh          $v0, 0x52E($v1)
    ctx->pc = 0x35a89cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1326)));
    // 0x35a8a0: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x35a8a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x35a8a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35a8a8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x35a8a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35a8ac: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x35A8ACu;
    {
        const bool branch_taken_0x35a8ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A8ACu;
        // 0x35a8b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a8ac) {
            ctx->pc = 0x35A8F8u;
            goto label_35a8f8;
        }
    }
    ctx->pc = 0x35A8B4u;
    // 0x35a8b4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x35a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_35a8b8:
    // 0x35a8b8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x35a8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a8bc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x35a8bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35a8c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x35A8C0u;
    {
        const bool branch_taken_0x35a8c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A8C0u;
        // 0x35a8c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a8c0) {
            ctx->pc = 0x35A8CCu;
            goto label_35a8cc;
        }
    }
    ctx->pc = 0x35A8C8u;
    // 0x35a8c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35a8cc:
    // 0x35a8cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x35a8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x35a8d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35A8D0u;
    {
        const bool branch_taken_0x35a8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a8d0) {
            ctx->pc = 0x35A8E0u;
            goto label_35a8e0;
        }
    }
    ctx->pc = 0x35A8D8u;
    // 0x35a8d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35A8D8u;
    {
        const bool branch_taken_0x35a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A8D8u;
        // 0x35a8dc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a8d8) {
            ctx->pc = 0x35A8F8u;
            goto label_35a8f8;
        }
    }
    ctx->pc = 0x35A8E0u;
label_35a8e0:
    // 0x35a8e0: 0x8462052e  lh          $v0, 0x52E($v1)
    ctx->pc = 0x35a8e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1326)));
    // 0x35a8e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35a8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35a8e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35a8ec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x35a8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35a8f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x35A8F0u;
    {
        const bool branch_taken_0x35a8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A8F0u;
        // 0x35a8f4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a8f0) {
            ctx->pc = 0x35A8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a8b8;
        }
    }
    ctx->pc = 0x35A8F8u;
label_35a8f8:
    // 0x35a8f8: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x35a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x35a8fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35a900: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x35a900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x35a904: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x35a904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x35a908: 0x2a33021  addu        $a2, $s5, $v1
    ctx->pc = 0x35a908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x35a90c: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x35a90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x35a910: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x35a910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a914: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x35A914u;
    SET_GPR_U32(ctx, 31, 0x35A91Cu);
    ctx->pc = 0x35A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A914u;
    // 0x35a918: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x35A914u, 0x35A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A91Cu;
label_35a91c:
    // 0x35a91c: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x35a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x35a920: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x35a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x35a924: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x35a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x35a928: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35a928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a92c: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x35a92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a930: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x35A930u;
    SET_GPR_U32(ctx, 31, 0x35A938u);
    ctx->pc = 0x35A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A930u;
    // 0x35a934: 0x46140301  sub.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x35A930u, 0x35A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A938u;
label_35a938:
    // 0x35a938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35a938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a93c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35a93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a940: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x35A940u;
    SET_GPR_U32(ctx, 31, 0x35A948u);
    ctx->pc = 0x35A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A940u;
    // 0x35a944: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x35A940u, 0x35A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A948u;
label_35a948:
    // 0x35a948: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x35a948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35a94c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x35a94cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35a950: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x35a950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35a954: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x35a954u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35a958: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35a95c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35a95cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35a960: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35a960u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35a964: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35a964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35a968: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35a968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35a96c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35a96cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a970: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35a970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a974: 0x3e00008  jr          $ra
    ctx->pc = 0x35A974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A974u;
        // 0x35a978: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A97Cu;
}
