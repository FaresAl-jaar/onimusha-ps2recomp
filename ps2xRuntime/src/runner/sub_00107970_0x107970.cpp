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

// Function: sub_00107970
// Address: 0x107970 - 0x107b0c
void sub_00107970_0x107970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107970_0x107970");
#endif

    switch (ctx->pc) {
        case 0x1079e0u: goto label_1079e0;
        case 0x107a04u: goto label_107a04;
        case 0x107a3cu: goto label_107a3c;
        case 0x107a48u: goto label_107a48;
        case 0x107accu: goto label_107acc;
        default: break;
    }

    ctx->pc = 0x107970u;

    // 0x107970: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x107970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x107974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107978: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x107978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x10797c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x10797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x107980: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x107980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x107984: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x107984u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107988: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x107988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10798c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10798cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x107990: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x107990u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107994: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x107994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x107998: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x107998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10799c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10799cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1079a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1079a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1079a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1079a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1079a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1079a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1079ac: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1079acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1079b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1079b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1079b4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1079b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x1079b8: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x1079b8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1079bc: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x1079bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1079c0: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1079C0u;
    {
        const bool branch_taken_0x1079c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1079C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079C0u;
        // 0x1079c4: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079c0) {
            ctx->pc = 0x1079F8u;
            goto label_1079f8;
        }
    }
    ctx->pc = 0x1079C8u;
    // 0x1079c8: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1079C8u;
    {
        const bool branch_taken_0x1079c8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1079c8) {
            ctx->pc = 0x1079CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1079C8u;
            // 0x1079cc: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107AA4u;
            goto label_107aa4;
        }
    }
    ctx->pc = 0x1079D0u;
    // 0x1079d0: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1079D0u;
    {
        const bool branch_taken_0x1079d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1079d0) {
            ctx->pc = 0x1079D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1079D0u;
            // 0x1079d4: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107AA4u;
            goto label_107aa4;
        }
    }
    ctx->pc = 0x1079D8u;
    // 0x1079d8: 0xc042132  jal         func_1084C8
    ctx->pc = 0x1079D8u;
    SET_GPR_U32(ctx, 31, 0x1079E0u);
    ctx->pc = 0x1079DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1079D8u;
    // 0x1079dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x1079D8u, 0x1079E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1079E0u;
label_1079e0:
    // 0x1079e0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1079e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1079e4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1079e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1079e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1079e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1079ec: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1079ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1079f0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1079F0u;
    {
        const bool branch_taken_0x1079f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079F0u;
        // 0x1079f4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079f0) {
            ctx->pc = 0x107AA0u;
            goto label_107aa0;
        }
    }
    ctx->pc = 0x1079F8u;
label_1079f8:
    // 0x1079f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1079f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1079fc: 0xc042132  jal         func_1084C8
    ctx->pc = 0x1079FCu;
    SET_GPR_U32(ctx, 31, 0x107A04u);
    ctx->pc = 0x107A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1079FCu;
    // 0x107a00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x1079FCu, 0x107A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A04u;
label_107a04:
    // 0x107a04: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x107a04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x107a08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x107a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107a0c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x107a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x107a10: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x107a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x107a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a18: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x107a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x107a1c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x107a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x107a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x107a24: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x107a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a28: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x107a28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a2c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x107a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a30: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x107a30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a34: 0xc041d52  jal         func_107548
    ctx->pc = 0x107A34u;
    SET_GPR_U32(ctx, 31, 0x107A3Cu);
    ctx->pc = 0x107A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107A34u;
    // 0x107a38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107548u, 0x107A34u, 0x107A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A3Cu;
label_107a3c:
    // 0x107a3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a40: 0xc042132  jal         func_1084C8
    ctx->pc = 0x107A40u;
    SET_GPR_U32(ctx, 31, 0x107A48u);
    ctx->pc = 0x107A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107A40u;
    // 0x107a44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x107A40u, 0x107A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A48u;
label_107a48:
    // 0x107a48: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x107a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x107a4c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x107a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x107a50: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x107a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x107a54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a58: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x107a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a5c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x107a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a60: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x107a60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a64: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x107a64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a68: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x107a68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a6c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x107a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x107a70: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x107a70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x107a74: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x107a74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a78: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x107a78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107a7c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x107a7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107a80: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x107a80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107a84: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x107a84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107a88: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x107a88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107a8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x107a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107a90: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x107a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107a94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107a98: 0x8041d52  j           func_107548
    ctx->pc = 0x107A98u;
    ctx->pc = 0x107A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107A98u;
    // 0x107a9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107548u;
    sub_00107548_0x107548(rdram, ctx, runtime); return;
    ctx->pc = 0x107AA0u;
label_107aa0:
    // 0x107aa0: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x107aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_107aa4:
    // 0x107aa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107aa8: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x107aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x107aac: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x107aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ab0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x107ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ab4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x107ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ab8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x107ab8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107abc: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x107abcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ac4: 0xc041d52  jal         func_107548
    ctx->pc = 0x107AC4u;
    SET_GPR_U32(ctx, 31, 0x107ACCu);
    ctx->pc = 0x107AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107AC4u;
    // 0x107ac8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107548u, 0x107AC4u, 0x107ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107ACCu;
label_107acc:
    // 0x107acc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107ad0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x107ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x107ad4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x107ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x107ad8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x107ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x107adc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x107adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x107ae0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x107ae0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x107ae4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x107ae4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107ae8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x107ae8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107aec: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x107aecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107af0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x107af0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107af4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x107af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107af8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x107af8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107afc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x107afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107b00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107b04: 0x3e00008  jr          $ra
    ctx->pc = 0x107B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B04u;
        // 0x107b08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107B0Cu;
}
