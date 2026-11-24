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

// Function: sub_00233688
// Address: 0x233688 - 0x23378c
void sub_00233688_0x233688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233688_0x233688");
#endif

    switch (ctx->pc) {
        case 0x2336f0u: goto label_2336f0;
        case 0x233704u: goto label_233704;
        case 0x233718u: goto label_233718;
        case 0x233724u: goto label_233724;
        case 0x233734u: goto label_233734;
        case 0x23373cu: goto label_23373c;
        case 0x233744u: goto label_233744;
        case 0x23374cu: goto label_23374c;
        default: break;
    }

    ctx->pc = 0x233688u;

    // 0x233688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23368c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23368cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233694: 0x2447fce8  addiu       $a3, $v0, -0x318
    ctx->pc = 0x233694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966504));
    // 0x233698: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23369c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23369cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2336a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2336a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2336a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2336a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2336a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2336a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2336ac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2336acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2336b0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2336b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2336b4: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x2336b4u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4BFCE8u));
    // 0x2336b8: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2336B8u;
    {
        const bool branch_taken_0x2336b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2336BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336B8u;
        // 0x2336bc: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336b8) {
            ctx->pc = 0x233758u;
            goto label_233758;
        }
    }
    ctx->pc = 0x2336C0u;
    // 0x2336c0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2336c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2336c4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2336c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2336c8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2336c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2336cc: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2336ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2336d0: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x2336d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x2336d4: 0x2453fc80  addiu       $s3, $v0, -0x380
    ctx->pc = 0x2336d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966400));
    // 0x2336d8: 0x2476fcbc  addiu       $s6, $v1, -0x344
    ctx->pc = 0x2336d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966460));
    // 0x2336dc: 0x2492fd38  addiu       $s2, $a0, -0x2C8
    ctx->pc = 0x2336dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966584));
    // 0x2336e0: 0x24b5fcc0  addiu       $s5, $a1, -0x340
    ctx->pc = 0x2336e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966464));
    // 0x2336e4: 0x24d1fc58  addiu       $s1, $a2, -0x3A8
    ctx->pc = 0x2336e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966360));
    // 0x2336e8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2336e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2336ec: 0x0  nop
    ctx->pc = 0x2336ecu;
    // NOP
label_2336f0:
    // 0x2336f0: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x2336f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2336f4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2336f4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2336f8: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x2336f8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x2336fc: 0xc08ceec  jal         func_233BB0
    ctx->pc = 0x2336FCu;
    SET_GPR_U32(ctx, 31, 0x233704u);
    ctx->pc = 0x233700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336FCu;
    // 0x233700: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233BB0u, 0x2336FCu, 0x233704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233704u;
label_233704:
    // 0x233704: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x233704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x233708: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x233708u;
    {
        const bool branch_taken_0x233708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x233708) {
            ctx->pc = 0x233718u;
            goto label_233718;
        }
    }
    ctx->pc = 0x233710u;
    // 0x233710: 0xc08d3ea  jal         func_234FA8
    ctx->pc = 0x233710u;
    SET_GPR_U32(ctx, 31, 0x233718u);
    ctx->pc = 0x234FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234FA8u, 0x233710u, 0x233718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233718u;
label_233718:
    // 0x233718: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x233718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x23371c: 0xc08cffa  jal         func_233FE8
    ctx->pc = 0x23371Cu;
    SET_GPR_U32(ctx, 31, 0x233724u);
    ctx->pc = 0x233720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23371Cu;
    // 0x233720: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233FE8u, 0x23371Cu, 0x233724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233724u;
label_233724:
    // 0x233724: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233724u;
    {
        const bool branch_taken_0x233724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x233724) {
            ctx->pc = 0x233734u;
            goto label_233734;
        }
    }
    ctx->pc = 0x23372Cu;
    // 0x23372c: 0xc08ceec  jal         func_233BB0
    ctx->pc = 0x23372Cu;
    SET_GPR_U32(ctx, 31, 0x233734u);
    ctx->pc = 0x233730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23372Cu;
    // 0x233730: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233BB0u, 0x23372Cu, 0x233734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233734u;
label_233734:
    // 0x233734: 0xc08d27e  jal         func_2349F8
    ctx->pc = 0x233734u;
    SET_GPR_U32(ctx, 31, 0x23373Cu);
    ctx->pc = 0x2349F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2349F8u, 0x233734u, 0x23373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23373Cu;
label_23373c:
    // 0x23373c: 0xc094e50  jal         func_253940
    ctx->pc = 0x23373Cu;
    SET_GPR_U32(ctx, 31, 0x233744u);
    ctx->pc = 0x233740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23373Cu;
    // 0x233740: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253940u, 0x23373Cu, 0x233744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233744u;
label_233744:
    // 0x233744: 0xc08cecc  jal         func_233B30
    ctx->pc = 0x233744u;
    SET_GPR_U32(ctx, 31, 0x23374Cu);
    ctx->pc = 0x233748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233744u;
    // 0x233748: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B30u, 0x233744u, 0x23374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23374Cu;
label_23374c:
    // 0x23374c: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x23374cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x233750: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x233750u;
    {
        const bool branch_taken_0x233750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233750u;
        // 0x233754: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233750) {
            ctx->pc = 0x2336F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2336f0;
        }
    }
    ctx->pc = 0x233758u;
label_233758:
    // 0x233758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23375c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23375cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233764: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233768: 0x2442fcf0  addiu       $v0, $v0, -0x310
    ctx->pc = 0x233768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966512));
    // 0x23376c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23376cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x233770: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233774: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233774u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x233778: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x233778u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23377c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x23377cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233780: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x233780u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x233784: 0x8043788  j           func_10DE20
    ctx->pc = 0x233784u;
    ctx->pc = 0x233788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233784u;
    // 0x233788: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE20u;
    sub_0010DE20_0x10de20(rdram, ctx, runtime); return;
    ctx->pc = 0x23378Cu;
}
