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

// Function: sub_0039C520
// Address: 0x39c520 - 0x39c6dc
void sub_0039C520_0x39c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C520_0x39c520");
#endif

    switch (ctx->pc) {
        case 0x39c588u: goto label_39c588;
        case 0x39c594u: goto label_39c594;
        case 0x39c5a4u: goto label_39c5a4;
        case 0x39c5b8u: goto label_39c5b8;
        case 0x39c5ccu: goto label_39c5cc;
        case 0x39c5f0u: goto label_39c5f0;
        case 0x39c600u: goto label_39c600;
        case 0x39c614u: goto label_39c614;
        case 0x39c624u: goto label_39c624;
        case 0x39c638u: goto label_39c638;
        case 0x39c66cu: goto label_39c66c;
        default: break;
    }

    ctx->pc = 0x39c520u;

    // 0x39c520: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x39c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x39c524: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x39c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x39c528: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x39c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x39c52c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x39c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x39c530: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x39c530u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c534: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39c534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x39c538: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x39c538u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c53c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39c53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x39c540: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x39c540u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c544: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39c544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39c548: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x39c548u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c54c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39c550: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39c550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c554: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39c558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39c55c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x39c55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c560: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x39c560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c564: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x39c564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x39c568: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39C568u;
    {
        const bool branch_taken_0x39c568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C568u;
        // 0x39c56c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c568) {
            ctx->pc = 0x39C578u;
            goto label_39c578;
        }
    }
    ctx->pc = 0x39C570u;
    // 0x39c570: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x39C570u;
    {
        const bool branch_taken_0x39c570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C570u;
        // 0x39c574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c570) {
            ctx->pc = 0x39C6B0u;
            goto label_39c6b0;
        }
    }
    ctx->pc = 0x39C578u;
label_39c578:
    // 0x39c578: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39C578u;
    {
        const bool branch_taken_0x39c578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c578) {
            ctx->pc = 0x39C598u;
            goto label_39c598;
        }
    }
    ctx->pc = 0x39C580u;
    // 0x39c580: 0xc0e71cc  jal         func_39C730
    ctx->pc = 0x39C580u;
    SET_GPR_U32(ctx, 31, 0x39C588u);
    ctx->pc = 0x39C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C730u, 0x39C580u, 0x39C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C588u;
label_39c588:
    // 0x39c588: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39c588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c58c: 0xc0e7104  jal         func_39C410
    ctx->pc = 0x39C58Cu;
    SET_GPR_U32(ctx, 31, 0x39C594u);
    ctx->pc = 0x39C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C58Cu;
    // 0x39c590: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C410u, 0x39C58Cu, 0x39C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C594u;
label_39c594:
    // 0x39c594: 0x0  nop
    ctx->pc = 0x39c594u;
    // NOP
label_39c598:
    // 0x39c598: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x39c598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x39c59c: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x39C59Cu;
    SET_GPR_U32(ctx, 31, 0x39C5A4u);
    ctx->pc = 0x39C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C59Cu;
    // 0x39c5a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x39C59Cu, 0x39C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C5A4u;
label_39c5a4:
    // 0x39c5a4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x39c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x39c5a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x39c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x39c5ac: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x39c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x39c5b0: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x39C5B0u;
    SET_GPR_U32(ctx, 31, 0x39C5B8u);
    ctx->pc = 0x39C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C5B0u;
    // 0x39c5b4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x39C5B0u, 0x39C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C5B8u;
label_39c5b8:
    // 0x39c5b8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x39c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x39c5bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x39c5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x39c5c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39c5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x39c5c4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x39C5C4u;
    SET_GPR_U32(ctx, 31, 0x39C5CCu);
    ctx->pc = 0x39C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C5C4u;
    // 0x39c5c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x39C5C4u, 0x39C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C5CCu;
label_39c5cc:
    // 0x39c5cc: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39C5CCu;
    {
        const bool branch_taken_0x39c5cc = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x39C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5CCu;
        // 0x39c5d0: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c5cc) {
            ctx->pc = 0x39C5DCu;
            goto label_39c5dc;
        }
    }
    ctx->pc = 0x39C5D4u;
    // 0x39c5d4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x39c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x39c5d8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39c5d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_39c5dc:
    // 0x39c5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39c5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39c5e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x39c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x39c5e4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x39c5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x39c5e8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x39C5E8u;
    SET_GPR_U32(ctx, 31, 0x39C5F0u);
    ctx->pc = 0x39C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C5E8u;
    // 0x39c5ec: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x39C5E8u, 0x39C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C5F0u;
label_39c5f0:
    // 0x39c5f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39c5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c5f4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x39c5f8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x39C5F8u;
    SET_GPR_U32(ctx, 31, 0x39C600u);
    ctx->pc = 0x39C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C5F8u;
    // 0x39c5fc: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x39C5F8u, 0x39C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C600u;
label_39c600:
    // 0x39c600: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x39c600u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39c604: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x39c604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x39c608: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x39c608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x39c60c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x39C60Cu;
    SET_GPR_U32(ctx, 31, 0x39C614u);
    ctx->pc = 0x39C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C60Cu;
    // 0x39c610: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x39C60Cu, 0x39C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C614u;
label_39c614:
    // 0x39c614: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39c614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x39c618: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x39c618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x39c61c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x39C61Cu;
    SET_GPR_U32(ctx, 31, 0x39C624u);
    ctx->pc = 0x39C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C61Cu;
    // 0x39c620: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x39C61Cu, 0x39C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C624u;
label_39c624:
    // 0x39c624: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x39c624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c628: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x39c628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c62c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39c62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c630: 0xc0e7118  jal         func_39C460
    ctx->pc = 0x39C630u;
    SET_GPR_U32(ctx, 31, 0x39C638u);
    ctx->pc = 0x39C634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C630u;
    // 0x39c634: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C460u, 0x39C630u, 0x39C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C638u;
label_39c638:
    // 0x39c638: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39c638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c63c: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x39C63Cu;
    {
        const bool branch_taken_0x39c63c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c63c) {
            ctx->pc = 0x39C6A8u;
            goto label_39c6a8;
        }
    }
    ctx->pc = 0x39C644u;
    // 0x39c644: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x39c644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x39c648: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x39c648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x39c64c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x39c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x39c650: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x39c650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x39c654: 0x288c0  sll         $s1, $v0, 3
    ctx->pc = 0x39c654u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x39c658: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39c658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c65c: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x39c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x39c660: 0x84522b36  lh          $s2, 0x2B36($v0)
    ctx->pc = 0x39c660u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 11062)));
    // 0x39c664: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x39C664u;
    SET_GPR_U32(ctx, 31, 0x39C66Cu);
    ctx->pc = 0x39C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C664u;
    // 0x39c668: 0x24502b36  addiu       $s0, $v0, 0x2B36 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11062));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x39C664u, 0x39C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C66Cu;
label_39c66c:
    // 0x39c66c: 0xa0542b22  sb          $s4, 0x2B22($v0)
    ctx->pc = 0x39c66cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11042), (uint8_t)GPR_U32(ctx, 20));
    // 0x39c670: 0x2352021  addu        $a0, $s1, $s5
    ctx->pc = 0x39c670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x39c674: 0xa0522b23  sb          $s2, 0x2B23($v0)
    ctx->pc = 0x39c674u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11043), (uint8_t)GPR_U32(ctx, 18));
    // 0x39c678: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x39c678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x39c67c: 0xac562b5c  sw          $s6, 0x2B5C($v0)
    ctx->pc = 0x39c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11100), GPR_U32(ctx, 22));
    // 0x39c680: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x39c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39c684: 0xac532b20  sw          $s3, 0x2B20($v0)
    ctx->pc = 0x39c684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11040), GPR_U32(ctx, 19));
    // 0x39c688: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x39c688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x39c68c: 0xa0602b2c  sb          $zero, 0x2B2C($v1)
    ctx->pc = 0x39c68cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11052), (uint8_t)GPR_U32(ctx, 0));
    // 0x39c690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39c690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c694: 0xa0602b2f  sb          $zero, 0x2B2F($v1)
    ctx->pc = 0x39c694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11055), (uint8_t)GPR_U32(ctx, 0));
    // 0x39c698: 0xa0622b32  sb          $v0, 0x2B32($v1)
    ctx->pc = 0x39c698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11058), (uint8_t)GPR_U32(ctx, 2));
    // 0x39c69c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x39c69cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39c6a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39c6a4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x39c6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_39c6a8:
    // 0x39c6a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39c6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c6ac: 0x0  nop
    ctx->pc = 0x39c6acu;
    // NOP
label_39c6b0:
    // 0x39c6b0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x39c6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39c6b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x39c6b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39c6b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39c6b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39c6bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39c6bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39c6c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39c6c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39c6c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39c6c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39c6c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39c6c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c6cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c6d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x39C6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6D4u;
        // 0x39c6d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C6DCu;
}
