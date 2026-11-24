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

// Function: sub_001F6848
// Address: 0x1f6848 - 0x1f69bc
void sub_001F6848_0x1f6848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6848_0x1f6848");
#endif

    switch (ctx->pc) {
        case 0x1f6848u: goto label_1f6848;
        case 0x1f684cu: goto label_1f684c;
        case 0x1f6850u: goto label_1f6850;
        case 0x1f6854u: goto label_1f6854;
        case 0x1f6858u: goto label_1f6858;
        case 0x1f685cu: goto label_1f685c;
        case 0x1f6860u: goto label_1f6860;
        case 0x1f6864u: goto label_1f6864;
        case 0x1f6868u: goto label_1f6868;
        case 0x1f686cu: goto label_1f686c;
        case 0x1f6870u: goto label_1f6870;
        case 0x1f6874u: goto label_1f6874;
        case 0x1f6878u: goto label_1f6878;
        case 0x1f687cu: goto label_1f687c;
        case 0x1f6880u: goto label_1f6880;
        case 0x1f6884u: goto label_1f6884;
        case 0x1f6888u: goto label_1f6888;
        case 0x1f688cu: goto label_1f688c;
        case 0x1f6890u: goto label_1f6890;
        case 0x1f6894u: goto label_1f6894;
        case 0x1f6898u: goto label_1f6898;
        case 0x1f689cu: goto label_1f689c;
        case 0x1f68a0u: goto label_1f68a0;
        case 0x1f68a4u: goto label_1f68a4;
        case 0x1f68a8u: goto label_1f68a8;
        case 0x1f68acu: goto label_1f68ac;
        case 0x1f68b0u: goto label_1f68b0;
        case 0x1f68b4u: goto label_1f68b4;
        case 0x1f68b8u: goto label_1f68b8;
        case 0x1f68bcu: goto label_1f68bc;
        case 0x1f68c0u: goto label_1f68c0;
        case 0x1f68c4u: goto label_1f68c4;
        case 0x1f68c8u: goto label_1f68c8;
        case 0x1f68ccu: goto label_1f68cc;
        case 0x1f68d0u: goto label_1f68d0;
        case 0x1f68d4u: goto label_1f68d4;
        case 0x1f68d8u: goto label_1f68d8;
        case 0x1f68dcu: goto label_1f68dc;
        case 0x1f68e0u: goto label_1f68e0;
        case 0x1f68e4u: goto label_1f68e4;
        case 0x1f68e8u: goto label_1f68e8;
        case 0x1f68ecu: goto label_1f68ec;
        case 0x1f68f0u: goto label_1f68f0;
        case 0x1f68f4u: goto label_1f68f4;
        case 0x1f68f8u: goto label_1f68f8;
        case 0x1f68fcu: goto label_1f68fc;
        case 0x1f6900u: goto label_1f6900;
        case 0x1f6904u: goto label_1f6904;
        case 0x1f6908u: goto label_1f6908;
        case 0x1f690cu: goto label_1f690c;
        case 0x1f6910u: goto label_1f6910;
        case 0x1f6914u: goto label_1f6914;
        case 0x1f6918u: goto label_1f6918;
        case 0x1f691cu: goto label_1f691c;
        case 0x1f6920u: goto label_1f6920;
        case 0x1f6924u: goto label_1f6924;
        case 0x1f6928u: goto label_1f6928;
        case 0x1f692cu: goto label_1f692c;
        case 0x1f6930u: goto label_1f6930;
        case 0x1f6934u: goto label_1f6934;
        case 0x1f6938u: goto label_1f6938;
        case 0x1f693cu: goto label_1f693c;
        case 0x1f6940u: goto label_1f6940;
        case 0x1f6944u: goto label_1f6944;
        case 0x1f6948u: goto label_1f6948;
        case 0x1f694cu: goto label_1f694c;
        case 0x1f6950u: goto label_1f6950;
        case 0x1f6954u: goto label_1f6954;
        case 0x1f6958u: goto label_1f6958;
        case 0x1f695cu: goto label_1f695c;
        case 0x1f6960u: goto label_1f6960;
        case 0x1f6964u: goto label_1f6964;
        case 0x1f6968u: goto label_1f6968;
        case 0x1f696cu: goto label_1f696c;
        case 0x1f6970u: goto label_1f6970;
        case 0x1f6974u: goto label_1f6974;
        case 0x1f6978u: goto label_1f6978;
        case 0x1f697cu: goto label_1f697c;
        case 0x1f6980u: goto label_1f6980;
        case 0x1f6984u: goto label_1f6984;
        case 0x1f6988u: goto label_1f6988;
        case 0x1f698cu: goto label_1f698c;
        case 0x1f6990u: goto label_1f6990;
        case 0x1f6994u: goto label_1f6994;
        case 0x1f6998u: goto label_1f6998;
        case 0x1f699cu: goto label_1f699c;
        case 0x1f69a0u: goto label_1f69a0;
        case 0x1f69a4u: goto label_1f69a4;
        case 0x1f69a8u: goto label_1f69a8;
        case 0x1f69acu: goto label_1f69ac;
        case 0x1f69b0u: goto label_1f69b0;
        case 0x1f69b4u: goto label_1f69b4;
        case 0x1f69b8u: goto label_1f69b8;
        default: break;
    }

    ctx->pc = 0x1f6848u;

label_1f6848:
    // 0x1f6848: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f6848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f684c:
    // 0x1f684c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f684cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1f6850:
    // 0x1f6850: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f6850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f6854:
    // 0x1f6854: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f6854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1f6858:
    // 0x1f6858: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1f6858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1f685c:
    // 0x1f685c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f685cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f6860:
    // 0x1f6860: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1f6860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1f6864:
    // 0x1f6864: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f6864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1f6868:
    // 0x1f6868: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f6868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1f686c:
    // 0x1f686c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1f686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1f6870:
    // 0x1f6870: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1f6870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1f6874:
    // 0x1f6874: 0x8e530580  lw          $s3, 0x580($s2)
    ctx->pc = 0x1f6874u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1f6878:
    // 0x1f6878: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1f6878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_1f687c:
    // 0x1f687c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f6880:
    // 0x1f6880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f6880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f6884:
    // 0x1f6884: 0x24540110  addiu       $s4, $v0, 0x110
    ctx->pc = 0x1f6884u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_1f6888:
    // 0x1f6888: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x1f6888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_1f688c:
    // 0x1f688c: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x1f688cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1f6890:
    // 0x1f6890: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_1f6894:
    if (ctx->pc == 0x1F6894u) {
        ctx->pc = 0x1F6894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6890u;
        // 0x1f6894: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6898u;
        goto label_1f6898;
    }
    ctx->pc = 0x1F6890u;
    {
        const bool branch_taken_0x1f6890 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6890u;
        // 0x1f6894: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6890) {
            ctx->pc = 0x1F6950u;
            goto label_1f6950;
        }
    }
    ctx->pc = 0x1F6898u;
label_1f6898:
    // 0x1f6898: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f6898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f689c:
    // 0x1f689c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f689cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f68a0:
    // 0x1f68a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f68a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f68a4:
    // 0x1f68a4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f68a8:
    // 0x1f68a8: 0x40f809  jalr        $v0
label_1f68ac:
    if (ctx->pc == 0x1F68ACu) {
        ctx->pc = 0x1F68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68A8u;
        // 0x1f68ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68B0u;
        goto label_1f68b0;
    }
    ctx->pc = 0x1F68A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F68B0u);
        ctx->pc = 0x1F68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68A8u;
        // 0x1f68ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F68A8u, 0x1F68B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F68B0u;
label_1f68b0:
    // 0x1f68b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f68b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f68b4:
    // 0x1f68b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f68b8:
    // 0x1f68b8: 0xc049522  jal         func_125488
label_1f68bc:
    if (ctx->pc == 0x1F68BCu) {
        ctx->pc = 0x1F68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68B8u;
        // 0x1f68bc: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68C0u;
        goto label_1f68c0;
    }
    ctx->pc = 0x1F68B8u;
    SET_GPR_U32(ctx, 31, 0x1F68C0u);
    ctx->pc = 0x1F68BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68B8u;
    // 0x1f68bc: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1F68B8u, 0x1F68C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68C0u;
label_1f68c0:
    // 0x1f68c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f68c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f68c4:
    // 0x1f68c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f68c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f68c8:
    // 0x1f68c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f68c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f68cc:
    // 0x1f68cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1f68d0:
    // 0x1f68d0: 0x40f809  jalr        $v0
label_1f68d4:
    if (ctx->pc == 0x1F68D4u) {
        ctx->pc = 0x1F68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68D0u;
        // 0x1f68d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68D8u;
        goto label_1f68d8;
    }
    ctx->pc = 0x1F68D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F68D8u);
        ctx->pc = 0x1F68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68D0u;
        // 0x1f68d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F68D0u, 0x1F68D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F68D8u;
label_1f68d8:
    // 0x1f68d8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1f68d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1f68dc:
    // 0x1f68dc: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x1f68dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1f68e0:
    // 0x1f68e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1f68e4:
    if (ctx->pc == 0x1F68E4u) {
        ctx->pc = 0x1F68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68E0u;
        // 0x1f68e4: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68E8u;
        goto label_1f68e8;
    }
    ctx->pc = 0x1F68E0u;
    {
        const bool branch_taken_0x1f68e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68E0u;
        // 0x1f68e4: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68e0) {
            ctx->pc = 0x1F6938u;
            goto label_1f6938;
        }
    }
    ctx->pc = 0x1F68E8u;
label_1f68e8:
    // 0x1f68e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f68ec:
    // 0x1f68ec: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1f68ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f68f0:
    // 0x1f68f0: 0x2a43023  subu        $a2, $s5, $a0
    ctx->pc = 0x1f68f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1f68f4:
    // 0x1f68f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f68f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f68f8:
    // 0x1f68f8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f68fc:
    // 0x1f68fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f68fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6900:
    // 0x1f6900: 0x40f809  jalr        $v0
label_1f6904:
    if (ctx->pc == 0x1F6904u) {
        ctx->pc = 0x1F6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6900u;
        // 0x1f6904: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6908u;
        goto label_1f6908;
    }
    ctx->pc = 0x1F6900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6908u);
        ctx->pc = 0x1F6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6900u;
        // 0x1f6904: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6900u, 0x1F6908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6908u;
label_1f6908:
    // 0x1f6908: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1f6908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1f690c:
    // 0x1f690c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f690cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6910:
    // 0x1f6910: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1f6910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1f6914:
    // 0x1f6914: 0xc049522  jal         func_125488
label_1f6918:
    if (ctx->pc == 0x1F6918u) {
        ctx->pc = 0x1F6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6914u;
        // 0x1f6918: 0x2c52821  addu        $a1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F691Cu;
        goto label_1f691c;
    }
    ctx->pc = 0x1F6914u;
    SET_GPR_U32(ctx, 31, 0x1F691Cu);
    ctx->pc = 0x1F6918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6914u;
    // 0x1f6918: 0x2c52821  addu        $a1, $s6, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1F6914u, 0x1F691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F691Cu;
label_1f691c:
    // 0x1f691c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f6920:
    // 0x1f6920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6924:
    // 0x1f6924: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f6924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6928:
    // 0x1f6928: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f6928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1f692c:
    // 0x1f692c: 0x40f809  jalr        $v0
label_1f6930:
    if (ctx->pc == 0x1F6930u) {
        ctx->pc = 0x1F6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F692Cu;
        // 0x1f6930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6934u;
        goto label_1f6934;
    }
    ctx->pc = 0x1F692Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6934u);
        ctx->pc = 0x1F6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F692Cu;
        // 0x1f6930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F692Cu, 0x1F6934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6934u;
label_1f6934:
    // 0x1f6934: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x1f6934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_1f6938:
    // 0x1f6938: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f6938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1f693c:
    // 0x1f693c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1f6940:
    if (ctx->pc == 0x1F6940u) {
        ctx->pc = 0x1F6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F693Cu;
        // 0x1f6940: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6944u;
        goto label_1f6944;
    }
    ctx->pc = 0x1F693Cu;
    {
        const bool branch_taken_0x1f693c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f693c) {
            ctx->pc = 0x1F6940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F693Cu;
            // 0x1f6940: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6954u;
            goto label_1f6954;
        }
    }
    ctx->pc = 0x1F6944u;
label_1f6944:
    // 0x1f6944: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1f6944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1f6948:
    // 0x1f6948: 0x60f809  jalr        $v1
label_1f694c:
    if (ctx->pc == 0x1F694Cu) {
        ctx->pc = 0x1F694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6948u;
        // 0x1f694c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6950u;
        goto label_1f6950;
    }
    ctx->pc = 0x1F6948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F6950u);
        ctx->pc = 0x1F694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6948u;
        // 0x1f694c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6948u, 0x1F6950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6950u;
label_1f6950:
    // 0x1f6950: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f6950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f6954:
    // 0x1f6954: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
label_1f6958:
    if (ctx->pc == 0x1F6958u) {
        ctx->pc = 0x1F6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6954u;
        // 0x1f6958: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F695Cu;
        goto label_1f695c;
    }
    ctx->pc = 0x1F6954u;
    {
        const bool branch_taken_0x1f6954 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6954u;
        // 0x1f6958: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6954) {
            ctx->pc = 0x1F6998u;
            goto label_1f6998;
        }
    }
    ctx->pc = 0x1F695Cu;
label_1f695c:
    // 0x1f695c: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x1f695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
label_1f6960:
    // 0x1f6960: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1f6964:
    if (ctx->pc == 0x1F6964u) {
        ctx->pc = 0x1F6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6960u;
        // 0x1f6964: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6968u;
        goto label_1f6968;
    }
    ctx->pc = 0x1F6960u;
    {
        const bool branch_taken_0x1f6960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6960u;
        // 0x1f6964: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6960) {
            ctx->pc = 0x1F699Cu;
            goto label_1f699c;
        }
    }
    ctx->pc = 0x1F6968u;
label_1f6968:
    // 0x1f6968: 0x8e420524  lw          $v0, 0x524($s2)
    ctx->pc = 0x1f6968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1316)));
label_1f696c:
    // 0x1f696c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f6970:
    if (ctx->pc == 0x1F6970u) {
        ctx->pc = 0x1F6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F696Cu;
        // 0x1f6970: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6974u;
        goto label_1f6974;
    }
    ctx->pc = 0x1F696Cu;
    {
        const bool branch_taken_0x1f696c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F696Cu;
        // 0x1f6970: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f696c) {
            ctx->pc = 0x1F6984u;
            goto label_1f6984;
        }
    }
    ctx->pc = 0x1F6974u;
label_1f6974:
    // 0x1f6974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f6974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f6978:
    // 0x1f6978: 0x24a561a8  addiu       $a1, $a1, 0x61A8
    ctx->pc = 0x1f6978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25000));
label_1f697c:
    // 0x1f697c: 0xc07da70  jal         func_1F69C0
label_1f6980:
    if (ctx->pc == 0x1F6980u) {
        ctx->pc = 0x1F6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F697Cu;
        // 0x1f6980: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6984u;
        goto label_1f6984;
    }
    ctx->pc = 0x1F697Cu;
    SET_GPR_U32(ctx, 31, 0x1F6984u);
    ctx->pc = 0x1F6980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F697Cu;
    // 0x1f6980: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F69C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F69C0u, 0x1F697Cu, 0x1F6984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6984u;
label_1f6984:
    // 0x1f6984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f6984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f6988:
    // 0x1f6988: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f6988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f698c:
    // 0x1f698c: 0xc07da70  jal         func_1F69C0
label_1f6990:
    if (ctx->pc == 0x1F6990u) {
        ctx->pc = 0x1F6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F698Cu;
        // 0x1f6990: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6994u;
        goto label_1f6994;
    }
    ctx->pc = 0x1F698Cu;
    SET_GPR_U32(ctx, 31, 0x1F6994u);
    ctx->pc = 0x1F6990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F698Cu;
    // 0x1f6990: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F69C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F69C0u, 0x1F698Cu, 0x1F6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6994u;
label_1f6994:
    // 0x1f6994: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f6994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6998:
    // 0x1f6998: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f6998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f699c:
    // 0x1f699c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f699cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f69a0:
    // 0x1f69a0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1f69a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1f69a4:
    // 0x1f69a4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f69a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f69a8:
    // 0x1f69a8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1f69a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1f69ac:
    // 0x1f69ac: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1f69acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f69b0:
    // 0x1f69b0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1f69b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1f69b4:
    // 0x1f69b4: 0x3e00008  jr          $ra
label_1f69b8:
    if (ctx->pc == 0x1F69B8u) {
        ctx->pc = 0x1F69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69B4u;
        // 0x1f69b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F69BCu;
        goto label_fallthrough_0x1f69b4;
    }
    ctx->pc = 0x1F69B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69B4u;
        // 0x1f69b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F69B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f69b4:
    ctx->pc = 0x1F69BCu;
}
