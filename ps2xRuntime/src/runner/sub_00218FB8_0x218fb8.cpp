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

// Function: sub_00218FB8
// Address: 0x218fb8 - 0x219114
void sub_00218FB8_0x218fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218FB8_0x218fb8");
#endif

    switch (ctx->pc) {
        case 0x218fdcu: goto label_218fdc;
        case 0x218ff0u: goto label_218ff0;
        case 0x219000u: goto label_219000;
        case 0x219008u: goto label_219008;
        case 0x219050u: goto label_219050;
        case 0x219060u: goto label_219060;
        case 0x219090u: goto label_219090;
        case 0x2190a0u: goto label_2190a0;
        case 0x2190acu: goto label_2190ac;
        case 0x2190bcu: goto label_2190bc;
        case 0x2190ccu: goto label_2190cc;
        case 0x2190d4u: goto label_2190d4;
        case 0x2190f8u: goto label_2190f8;
        default: break;
    }

    ctx->pc = 0x218fb8u;

    // 0x218fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x218fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x218fbc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x218fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x218fc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218fc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x218fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218fd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x218fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x218fd4: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x218FD4u;
    SET_GPR_U32(ctx, 31, 0x218FDCu);
    ctx->pc = 0x218FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FD4u;
    // 0x218fd8: 0x263223a8  addiu       $s2, $s1, 0x23A8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 9128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x218FD4u, 0x218FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FDCu;
label_218fdc:
    // 0x218fdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fe0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x218FE0u;
    {
        const bool branch_taken_0x218fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FE0u;
        // 0x218fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218fe0) {
            ctx->pc = 0x2190FCu;
            goto label_2190fc;
        }
    }
    ctx->pc = 0x218FE8u;
    // 0x218fe8: 0xc086446  jal         func_219118
    ctx->pc = 0x218FE8u;
    SET_GPR_U32(ctx, 31, 0x218FF0u);
    ctx->pc = 0x218FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FE8u;
    // 0x218fec: 0xae321fc0  sw          $s2, 0x1FC0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8128), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219118u, 0x218FE8u, 0x218FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FF0u;
label_218ff0:
    // 0x218ff0: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x218FF0u;
    {
        const bool branch_taken_0x218ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FF0u;
        // 0x218ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ff0) {
            ctx->pc = 0x2190FCu;
            goto label_2190fc;
        }
    }
    ctx->pc = 0x218FF8u;
    // 0x218ff8: 0xc086c9a  jal         func_21B268
    ctx->pc = 0x218FF8u;
    SET_GPR_U32(ctx, 31, 0x219000u);
    ctx->pc = 0x21B268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B268u, 0x218FF8u, 0x219000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219000u;
label_219000:
    // 0x219000: 0xc0803aa  jal         func_200EA8
    ctx->pc = 0x219000u;
    SET_GPR_U32(ctx, 31, 0x219008u);
    ctx->pc = 0x200EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200EA8u, 0x219000u, 0x219008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219008u;
label_219008:
    // 0x219008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21900c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x21900cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x219010: 0x24a59500  addiu       $a1, $a1, -0x6B00
    ctx->pc = 0x219010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939904));
    // 0x219014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219018: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x219018u;
    {
        const bool branch_taken_0x219018 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219018u;
        // 0x21901c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219018) {
            ctx->pc = 0x219048u;
            goto label_219048;
        }
    }
    ctx->pc = 0x219020u;
    // 0x219020: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x219020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x219024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219028: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21902c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21902cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219030: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219034: 0x34a50f0a  ori         $a1, $a1, 0xF0A
    ctx->pc = 0x219034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3850);
    // 0x219038: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x219038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21903c: 0x80848e0  j           func_212380
    ctx->pc = 0x21903Cu;
    ctx->pc = 0x219040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21903Cu;
    // 0x219040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x219044u;
    // 0x219044: 0x0  nop
    ctx->pc = 0x219044u;
    // NOP
label_219048:
    // 0x219048: 0xc07f9ca  jal         func_1FE728
    ctx->pc = 0x219048u;
    SET_GPR_U32(ctx, 31, 0x219050u);
    ctx->pc = 0x1FE728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE728u, 0x219048u, 0x219050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219050u;
label_219050:
    // 0x219050: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x219050u;
    {
        const bool branch_taken_0x219050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219050u;
        // 0x219054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219050) {
            ctx->pc = 0x219088u;
            goto label_219088;
        }
    }
    ctx->pc = 0x219058u;
    // 0x219058: 0xc0865b4  jal         func_2196D0
    ctx->pc = 0x219058u;
    SET_GPR_U32(ctx, 31, 0x219060u);
    ctx->pc = 0x21905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219058u;
    // 0x21905c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2196D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2196D0u, 0x219058u, 0x219060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219060u;
label_219060:
    // 0x219060: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x219060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219064: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x219064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x219068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21906c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21906cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219070: 0x34a50f0b  ori         $a1, $a1, 0xF0B
    ctx->pc = 0x219070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3851);
    // 0x219074: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219078: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x219078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21907c: 0x80848e0  j           func_212380
    ctx->pc = 0x21907Cu;
    ctx->pc = 0x219080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21907Cu;
    // 0x219080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x219084u;
    // 0x219084: 0x0  nop
    ctx->pc = 0x219084u;
    // NOP
label_219088:
    // 0x219088: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x219088u;
    SET_GPR_U32(ctx, 31, 0x219090u);
    ctx->pc = 0x21908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219088u;
    // 0x21908c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x219088u, 0x219090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219090u;
label_219090:
    // 0x219090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219094: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x219094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219098: 0xc08042c  jal         func_2010B0
    ctx->pc = 0x219098u;
    SET_GPR_U32(ctx, 31, 0x2190A0u);
    ctx->pc = 0x21909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219098u;
    // 0x21909c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010B0u, 0x219098u, 0x2190A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190A0u;
label_2190a0:
    // 0x2190a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2190a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190a4: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x2190A4u;
    SET_GPR_U32(ctx, 31, 0x2190ACu);
    ctx->pc = 0x2190A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190A4u;
    // 0x2190a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x2190A4u, 0x2190ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190ACu;
label_2190ac:
    // 0x2190ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2190acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2190b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2190b4: 0xc08042c  jal         func_2010B0
    ctx->pc = 0x2190B4u;
    SET_GPR_U32(ctx, 31, 0x2190BCu);
    ctx->pc = 0x2190B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190B4u;
    // 0x2190b8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010B0u, 0x2190B4u, 0x2190BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190BCu;
label_2190bc:
    // 0x2190bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2190bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190c0: 0x8e260038  lw          $a2, 0x38($s1)
    ctx->pc = 0x2190c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2190c4: 0xc08042c  jal         func_2010B0
    ctx->pc = 0x2190C4u;
    SET_GPR_U32(ctx, 31, 0x2190CCu);
    ctx->pc = 0x2190C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190C4u;
    // 0x2190c8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010B0u, 0x2190C4u, 0x2190CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190CCu;
label_2190cc:
    // 0x2190cc: 0xc0876b8  jal         func_21DAE0
    ctx->pc = 0x2190CCu;
    SET_GPR_U32(ctx, 31, 0x2190D4u);
    ctx->pc = 0x2190D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190CCu;
    // 0x2190d0: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DAE0u, 0x2190CCu, 0x2190D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190D4u;
label_2190d4:
    // 0x2190d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2190D4u;
    {
        const bool branch_taken_0x2190d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190D4u;
        // 0x2190d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190d4) {
            ctx->pc = 0x2190F8u;
            goto label_2190f8;
        }
    }
    ctx->pc = 0x2190DCu;
    // 0x2190dc: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x2190dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x2190e0: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x2190e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x2190e4: 0x8c4559e0  lw          $a1, 0x59E0($v0)
    ctx->pc = 0x2190e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8859E0u));
    // 0x2190e8: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x2190e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x2190ec: 0x8c6659e4  lw          $a2, 0x59E4($v1)
    ctx->pc = 0x2190ecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8859E4u));
    // 0x2190f0: 0xc0853a4  jal         func_214E90
    ctx->pc = 0x2190F0u;
    SET_GPR_U32(ctx, 31, 0x2190F8u);
    ctx->pc = 0x2190F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190F0u;
    // 0x2190f4: 0x8c4759e8  lw          $a3, 0x59E8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23016)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214E90u, 0x2190F0u, 0x2190F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190F8u;
label_2190f8:
    // 0x2190f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2190f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2190fc:
    // 0x2190fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2190fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219100: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219104: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219108: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x219108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21910c: 0x3e00008  jr          $ra
    ctx->pc = 0x21910Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21910Cu;
        // 0x219110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21910Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219114u;
}
