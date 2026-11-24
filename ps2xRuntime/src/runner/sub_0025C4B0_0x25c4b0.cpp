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

// Function: sub_0025C4B0
// Address: 0x25c4b0 - 0x25c608
void sub_0025C4B0_0x25c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C4B0_0x25c4b0");
#endif

    switch (ctx->pc) {
        case 0x25c538u: goto label_25c538;
        case 0x25c5a0u: goto label_25c5a0;
        case 0x25c5bcu: goto label_25c5bc;
        default: break;
    }

    ctx->pc = 0x25c4b0u;

    // 0x25c4b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25c4b4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x25c4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x25c4b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25c4bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25c4c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25c4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x25c4c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25c4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25c4c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25c4c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25c4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25c4d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25c4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25c4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25c4d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25c4d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25c4dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25c4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4e0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x25c4e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x25c4e4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25C4E4u;
    {
        const bool branch_taken_0x25c4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4E4u;
        // 0x25c4e8: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4e4) {
            ctx->pc = 0x25C510u;
            goto label_25c510;
        }
    }
    ctx->pc = 0x25C4ECu;
    // 0x25c4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c4f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C4F0u;
    {
        const bool branch_taken_0x25c4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25c4f0) {
            ctx->pc = 0x25C500u;
            goto label_25c500;
        }
    }
    ctx->pc = 0x25C4F8u;
    // 0x25c4f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25C4F8u;
    {
        const bool branch_taken_0x25c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c4f8) {
            ctx->pc = 0x25C520u;
            goto label_25c520;
        }
    }
    ctx->pc = 0x25C500u;
label_25c500:
    // 0x25c500: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x25c500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x25c504: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25C504u;
    {
        const bool branch_taken_0x25c504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C504u;
        // 0x25c508: 0x8c315018  lw          $s1, 0x5018($at) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c504) {
            ctx->pc = 0x25C528u;
            goto label_25c528;
        }
    }
    ctx->pc = 0x25C50Cu;
    // 0x25c50c: 0x0  nop
    ctx->pc = 0x25c50cu;
    // NOP
label_25c510:
    // 0x25c510: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x25c510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x25c514: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25C514u;
    {
        const bool branch_taken_0x25c514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C514u;
        // 0x25c518: 0x8c314fb8  lw          $s1, 0x4FB8($at) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c514) {
            ctx->pc = 0x25C528u;
            goto label_25c528;
        }
    }
    ctx->pc = 0x25C51Cu;
    // 0x25c51c: 0x0  nop
    ctx->pc = 0x25c51cu;
    // NOP
label_25c520:
    // 0x25c520: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x25C520u;
    {
        const bool branch_taken_0x25c520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C520u;
        // 0x25c524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c520) {
            ctx->pc = 0x25C5E8u;
            goto label_25c5e8;
        }
    }
    ctx->pc = 0x25C528u;
label_25c528:
    // 0x25c528: 0x1620002b  bnez        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x25C528u;
    {
        const bool branch_taken_0x25c528 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C528u;
        // 0x25c52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c528) {
            ctx->pc = 0x25C5D8u;
            goto label_25c5d8;
        }
    }
    ctx->pc = 0x25C530u;
    // 0x25c530: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x25C530u;
    {
        const bool branch_taken_0x25c530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c530) {
            ctx->pc = 0x25C5E8u;
            goto label_25c5e8;
        }
    }
    ctx->pc = 0x25C538u;
label_25c538:
    // 0x25c538: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x25c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x25c53c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x25c53cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25c540: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C540u;
    {
        const bool branch_taken_0x25c540 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C540u;
        // 0x25c544: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c540) {
            ctx->pc = 0x25C550u;
            goto label_25c550;
        }
    }
    ctx->pc = 0x25C548u;
    // 0x25c548: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25c548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c54c: 0x0  nop
    ctx->pc = 0x25c54cu;
    // NOP
label_25c550:
    // 0x25c550: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C550u;
    {
        const bool branch_taken_0x25c550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c550) {
            ctx->pc = 0x25C560u;
            goto label_25c560;
        }
    }
    ctx->pc = 0x25C558u;
    // 0x25c558: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x25C558u;
    {
        const bool branch_taken_0x25c558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C558u;
        // 0x25c55c: 0x8e310018  lw          $s1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c558) {
            ctx->pc = 0x25C5D8u;
            goto label_25c5d8;
        }
    }
    ctx->pc = 0x25C560u;
label_25c560:
    // 0x25c560: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x25c560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x25c564: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C564u;
    {
        const bool branch_taken_0x25c564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c564) {
            ctx->pc = 0x25C578u;
            goto label_25c578;
        }
    }
    ctx->pc = 0x25C56Cu;
    // 0x25c56c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25C56Cu;
    {
        const bool branch_taken_0x25c56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C56Cu;
        // 0x25c570: 0x8e310018  lw          $s1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c56c) {
            ctx->pc = 0x25C5D8u;
            goto label_25c5d8;
        }
    }
    ctx->pc = 0x25C574u;
    // 0x25c574: 0x0  nop
    ctx->pc = 0x25c574u;
    // NOP
label_25c578:
    // 0x25c578: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x25C578u;
    {
        const bool branch_taken_0x25c578 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c578) {
            ctx->pc = 0x25C598u;
            goto label_25c598;
        }
    }
    ctx->pc = 0x25C580u;
    // 0x25c580: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x25c580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x25c584: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x25c584u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c588: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C588u;
    {
        const bool branch_taken_0x25c588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c588) {
            ctx->pc = 0x25C598u;
            goto label_25c598;
        }
    }
    ctx->pc = 0x25C590u;
    // 0x25c590: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25C590u;
    {
        const bool branch_taken_0x25c590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C590u;
        // 0x25c594: 0x8e310018  lw          $s1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c590) {
            ctx->pc = 0x25C5D8u;
            goto label_25c5d8;
        }
    }
    ctx->pc = 0x25C598u;
label_25c598:
    // 0x25c598: 0xc097864  jal         func_25E190
    ctx->pc = 0x25C598u;
    SET_GPR_U32(ctx, 31, 0x25C5A0u);
    ctx->pc = 0x25C59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C598u;
    // 0x25c59c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x25C598u, 0x25C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C5A0u;
label_25c5a0:
    // 0x25c5a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C5A0u;
    {
        const bool branch_taken_0x25c5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c5a0) {
            ctx->pc = 0x25C5B0u;
            goto label_25c5b0;
        }
    }
    ctx->pc = 0x25C5A8u;
    // 0x25c5a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25C5A8u;
    {
        const bool branch_taken_0x25c5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5A8u;
        // 0x25c5ac: 0x8e310018  lw          $s1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5a8) {
            ctx->pc = 0x25C5D8u;
            goto label_25c5d8;
        }
    }
    ctx->pc = 0x25C5B0u;
label_25c5b0:
    // 0x25c5b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5b4: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x25C5B4u;
    SET_GPR_U32(ctx, 31, 0x25C5BCu);
    ctx->pc = 0x25C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C5B4u;
    // 0x25c5b8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x25C5B4u, 0x25C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C5BCu;
label_25c5bc:
    // 0x25c5bc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25c5bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c5c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25C5C0u;
    {
        const bool branch_taken_0x25c5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c5c0) {
            ctx->pc = 0x25C5D0u;
            goto label_25c5d0;
        }
    }
    ctx->pc = 0x25C5C8u;
    // 0x25c5c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25c5c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25c5cc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x25c5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c5d0:
    // 0x25c5d0: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x25c5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x25c5d4: 0x0  nop
    ctx->pc = 0x25c5d4u;
    // NOP
label_25c5d8:
    // 0x25c5d8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x25c5d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25c5dc: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x25C5DCu;
    {
        const bool branch_taken_0x25c5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c5dc) {
            ctx->pc = 0x25C538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c538;
        }
    }
    ctx->pc = 0x25C5E4u;
    // 0x25c5e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25c5e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c5e8:
    // 0x25c5e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25c5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c5ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25c5ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c5f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25c5f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25c5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c5f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25c5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c5fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25c5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c600: 0x3e00008  jr          $ra
    ctx->pc = 0x25C600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C600u;
        // 0x25c604: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C608u;
}
