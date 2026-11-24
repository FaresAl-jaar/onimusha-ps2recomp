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

// Function: sub_00233880
// Address: 0x233880 - 0x2339b8
void sub_00233880_0x233880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233880_0x233880");
#endif

    switch (ctx->pc) {
        case 0x2338e8u: goto label_2338e8;
        case 0x2338fcu: goto label_2338fc;
        case 0x233918u: goto label_233918;
        case 0x233928u: goto label_233928;
        case 0x23393cu: goto label_23393c;
        case 0x233950u: goto label_233950;
        case 0x233968u: goto label_233968;
        case 0x233974u: goto label_233974;
        default: break;
    }

    ctx->pc = 0x233880u;

    // 0x233880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x233880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x233884: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23388c: 0x2446fd08  addiu       $a2, $v0, -0x2F8
    ctx->pc = 0x23388cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966536));
    // 0x233890: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x233894: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x233894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x233898: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23389c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23389cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2338a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2338a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2338a4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2338a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2338a8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2338a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2338ac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2338acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2338b0: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x2338b0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4BFD08u));
    // 0x2338b4: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2338B4u;
    {
        const bool branch_taken_0x2338b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2338B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338B4u;
        // 0x2338b8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338b4) {
            ctx->pc = 0x233980u;
            goto label_233980;
        }
    }
    ctx->pc = 0x2338BCu;
    // 0x2338bc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2338bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2338c0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2338c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2338c4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2338c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2338c8: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2338c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2338cc: 0x2454fc90  addiu       $s4, $v0, -0x370
    ctx->pc = 0x2338ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966416));
    // 0x2338d0: 0x2473fc64  addiu       $s3, $v1, -0x39C
    ctx->pc = 0x2338d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966372));
    // 0x2338d4: 0x2492fc54  addiu       $s2, $a0, -0x3AC
    ctx->pc = 0x2338d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966356));
    // 0x2338d8: 0x24b7fd38  addiu       $s7, $a1, -0x2C8
    ctx->pc = 0x2338d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966584));
    // 0x2338dc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2338dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2338e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2338e4: 0x3c15004c  lui         $s5, 0x4C
    ctx->pc = 0x2338e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
label_2338e8:
    // 0x2338e8: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x2338e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2338ec: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2338ecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2338f0: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x2338f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x2338f4: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x2338F4u;
    SET_GPR_U32(ctx, 31, 0x2338FCu);
    ctx->pc = 0x2338F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338F4u;
    // 0x2338f8: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x2338F4u, 0x2338FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338FCu;
label_2338fc:
    // 0x2338fc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2338fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x233900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233904: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x233904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x233908: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x233908u;
    {
        const bool branch_taken_0x233908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x233908) {
            ctx->pc = 0x233918u;
            goto label_233918;
        }
    }
    ctx->pc = 0x233910u;
    // 0x233910: 0xc08cecc  jal         func_233B30
    ctx->pc = 0x233910u;
    SET_GPR_U32(ctx, 31, 0x233918u);
    ctx->pc = 0x233914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233910u;
    // 0x233914: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B30u, 0x233910u, 0x233918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233918u;
label_233918:
    // 0x233918: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x233918u;
    {
        const bool branch_taken_0x233918 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x233918) {
            ctx->pc = 0x233974u;
            goto label_233974;
        }
    }
    ctx->pc = 0x233920u;
    // 0x233920: 0xc08cffa  jal         func_233FE8
    ctx->pc = 0x233920u;
    SET_GPR_U32(ctx, 31, 0x233928u);
    ctx->pc = 0x233FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233FE8u, 0x233920u, 0x233928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233928u;
label_233928:
    // 0x233928: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x233928u;
    {
        const bool branch_taken_0x233928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x23392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233928u;
        // 0x23392c: 0x26b0fcc0  addiu       $s0, $s5, -0x340 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233928) {
            ctx->pc = 0x233950u;
            goto label_233950;
        }
    }
    ctx->pc = 0x233930u;
    // 0x233930: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x233930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233934: 0xc08ced2  jal         func_233B48
    ctx->pc = 0x233934u;
    SET_GPR_U32(ctx, 31, 0x23393Cu);
    ctx->pc = 0x233B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B48u, 0x233934u, 0x23393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23393Cu;
label_23393c:
    // 0x23393c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23393cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233940: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x233940u;
    {
        const bool branch_taken_0x233940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x233940) {
            ctx->pc = 0x233950u;
            goto label_233950;
        }
    }
    ctx->pc = 0x233948u;
    // 0x233948: 0xc08ceb8  jal         func_233AE0
    ctx->pc = 0x233948u;
    SET_GPR_U32(ctx, 31, 0x233950u);
    ctx->pc = 0x23394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233948u;
    // 0x23394c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233AE0u, 0x233948u, 0x233950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233950u;
label_233950:
    // 0x233950: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x233950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x233954: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x233954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233958: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x233958u;
    {
        const bool branch_taken_0x233958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x233958) {
            ctx->pc = 0x23396Cu;
            goto label_23396c;
        }
    }
    ctx->pc = 0x233960u;
    // 0x233960: 0xc08d3ea  jal         func_234FA8
    ctx->pc = 0x233960u;
    SET_GPR_U32(ctx, 31, 0x233968u);
    ctx->pc = 0x234FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234FA8u, 0x233960u, 0x233968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233968u;
label_233968:
    // 0x233968: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x233968u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_23396c:
    // 0x23396c: 0xc08cecc  jal         func_233B30
    ctx->pc = 0x23396Cu;
    SET_GPR_U32(ctx, 31, 0x233974u);
    ctx->pc = 0x233B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B30u, 0x23396Cu, 0x233974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233974u;
label_233974:
    // 0x233974: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x233974u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x233978: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x233978u;
    {
        const bool branch_taken_0x233978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233978u;
        // 0x23397c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233978) {
            ctx->pc = 0x2338E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2338e8;
        }
    }
    ctx->pc = 0x233980u;
label_233980:
    // 0x233980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23398c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23398cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233990: 0x2442fd10  addiu       $v0, $v0, -0x2F0
    ctx->pc = 0x233990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966544));
    // 0x233994: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233994u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x233998: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233998u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23399c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23399cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2339a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2339a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2339a4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2339a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2339a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2339a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2339ac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2339acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2339b0: 0x8043788  j           func_10DE20
    ctx->pc = 0x2339B0u;
    ctx->pc = 0x2339B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339B0u;
    // 0x2339b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE20u;
    sub_0010DE20_0x10de20(rdram, ctx, runtime); return;
    ctx->pc = 0x2339B8u;
}
