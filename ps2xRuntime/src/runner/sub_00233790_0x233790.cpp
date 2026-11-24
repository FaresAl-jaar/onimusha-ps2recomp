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

// Function: sub_00233790
// Address: 0x233790 - 0x233880
void sub_00233790_0x233790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233790_0x233790");
#endif

    switch (ctx->pc) {
        case 0x2337f0u: goto label_2337f0;
        case 0x233818u: goto label_233818;
        case 0x233840u: goto label_233840;
        default: break;
    }

    ctx->pc = 0x233790u;

    // 0x233790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233794: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x233794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x233798: 0x3c15004c  lui         $s5, 0x4C
    ctx->pc = 0x233798u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
    // 0x23379c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2337a0: 0x26a2fcf8  addiu       $v0, $s5, -0x308
    ctx->pc = 0x2337a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966520));
    // 0x2337a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2337a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2337a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2337a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2337ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2337acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2337b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2337b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2337b4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2337b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2337b8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2337b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2337bc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2337bcu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4BFCF8u));
    // 0x2337c0: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2337C0u;
    {
        const bool branch_taken_0x2337c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2337C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337C0u;
        // 0x2337c4: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337c0) {
            ctx->pc = 0x23384Cu;
            goto label_23384c;
        }
    }
    ctx->pc = 0x2337C8u;
    // 0x2337c8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2337c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2337cc: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2337ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2337d0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2337d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2337d4: 0x3c121200  lui         $s2, 0x1200
    ctx->pc = 0x2337d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4608 << 16));
    // 0x2337d8: 0x2454fc88  addiu       $s4, $v0, -0x378
    ctx->pc = 0x2337d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966408));
    // 0x2337dc: 0x2473fc60  addiu       $s3, $v1, -0x3A0
    ctx->pc = 0x2337dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966368));
    // 0x2337e0: 0x2491fd34  addiu       $s1, $a0, -0x2CC
    ctx->pc = 0x2337e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966580));
    // 0x2337e4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2337e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2337e8: 0x365200e0  ori         $s2, $s2, 0xE0
    ctx->pc = 0x2337e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)224);
    // 0x2337ec: 0x0  nop
    ctx->pc = 0x2337ecu;
    // NOP
label_2337f0:
    // 0x2337f0: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x2337f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2337f4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2337f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2337f8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2337f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2337fc: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x2337fcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x233800: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x233800u;
    {
        const bool branch_taken_0x233800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233800u;
        // 0x233804: 0xae760000  sw          $s6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233800) {
            ctx->pc = 0x233810u;
            goto label_233810;
        }
    }
    ctx->pc = 0x233808u;
    // 0x233808: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x233808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23380c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x23380cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_233810:
    // 0x233810: 0xc094e5c  jal         func_253970
    ctx->pc = 0x233810u;
    SET_GPR_U32(ctx, 31, 0x233818u);
    ctx->pc = 0x253970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253970u, 0x233810u, 0x233818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233818u;
label_233818:
    // 0x233818: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x233818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23381c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23381Cu;
    {
        const bool branch_taken_0x23381c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23381c) {
            ctx->pc = 0x233820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23381Cu;
            // 0x233820: 0xfe400000  sd          $zero, 0x0($s2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233824u;
            goto label_233824;
        }
    }
    ctx->pc = 0x233824u;
label_233824:
    // 0x233824: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x233824u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x233828: 0x26b0fcf8  addiu       $s0, $s5, -0x308
    ctx->pc = 0x233828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966520));
    // 0x23382c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x23382cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233830: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x233830u;
    {
        const bool branch_taken_0x233830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233830) {
            ctx->pc = 0x233834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233830u;
            // 0x233834: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23384Cu;
            goto label_23384c;
        }
    }
    ctx->pc = 0x233838u;
    // 0x233838: 0xc08cecc  jal         func_233B30
    ctx->pc = 0x233838u;
    SET_GPR_U32(ctx, 31, 0x233840u);
    ctx->pc = 0x233B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B30u, 0x233838u, 0x233840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233840u;
label_233840:
    // 0x233840: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x233840u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233844: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x233844u;
    {
        const bool branch_taken_0x233844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233844u;
        // 0x233848: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233844) {
            ctx->pc = 0x2337F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2337f0;
        }
    }
    ctx->pc = 0x23384Cu;
label_23384c:
    // 0x23384c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23384cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233858: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23385c: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x23385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
    // 0x233860: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x233864: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233864u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233868: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233868u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23386c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23386cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233870: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x233870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233874: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x233874u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x233878: 0x8043788  j           func_10DE20
    ctx->pc = 0x233878u;
    ctx->pc = 0x23387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233878u;
    // 0x23387c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE20u;
    sub_0010DE20_0x10de20(rdram, ctx, runtime); return;
    ctx->pc = 0x233880u;
}
