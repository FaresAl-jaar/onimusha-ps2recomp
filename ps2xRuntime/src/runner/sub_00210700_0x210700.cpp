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

// Function: sub_00210700
// Address: 0x210700 - 0x2107cc
void sub_00210700_0x210700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210700_0x210700");
#endif

    switch (ctx->pc) {
        case 0x210734u: goto label_210734;
        case 0x2107a8u: goto label_2107a8;
        default: break;
    }

    ctx->pc = 0x210700u;

    // 0x210700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x210700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x210704: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x210704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x210708: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x210708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21070c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21070cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x210710: 0x26500d30  addiu       $s0, $s2, 0xD30
    ctx->pc = 0x210710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x210714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x210714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210718: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x210718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21071c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21071cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x210720: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x210720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210724: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x210724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x210728: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x210728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x21072c: 0xc084990  jal         func_212640
    ctx->pc = 0x21072Cu;
    SET_GPR_U32(ctx, 31, 0x210734u);
    ctx->pc = 0x210730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21072Cu;
    // 0x210730: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x21072Cu, 0x210734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210734u;
label_210734:
    // 0x210734: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x210734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x210738: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x210738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x21073c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21073cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210740: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210740u;
    {
        const bool branch_taken_0x210740 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x210744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210740u;
        // 0x210744: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210740) {
            ctx->pc = 0x210758u;
            goto label_210758;
        }
    }
    ctx->pc = 0x210748u;
    // 0x210748: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x210748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21074c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21074cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210750: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x210750u;
    {
        const bool branch_taken_0x210750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210750u;
        // 0x210754: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210750) {
            ctx->pc = 0x2107A0u;
            goto label_2107a0;
        }
    }
    ctx->pc = 0x210758u;
label_210758:
    // 0x210758: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x210758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x21075c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x21075cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210760: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x210760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x210764: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x210764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x210768: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x210768u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21076c: 0x2466001f  addiu       $a2, $v1, 0x1F
    ctx->pc = 0x21076cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x210770: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x210770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210774: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x210774u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x210778: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x210778u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x21077c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21077cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x210780: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x210780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210784: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x210784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x210788: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x210788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x21078c: 0x8c650f2c  lw          $a1, 0xF2C($v1)
    ctx->pc = 0x21078cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3884)));
    // 0x210790: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x210790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x210794: 0x8e0201f8  lw          $v0, 0x1F8($s0)
    ctx->pc = 0x210794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x210798: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x210798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21079c: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x21079cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
label_2107a0:
    // 0x2107a0: 0xc084996  jal         func_212658
    ctx->pc = 0x2107A0u;
    SET_GPR_U32(ctx, 31, 0x2107A8u);
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x2107A0u, 0x2107A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2107A8u;
label_2107a8:
    // 0x2107a8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2107a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2107acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2107b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2107b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2107b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2107b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2107b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2107b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2107bc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2107bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2107c0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2107c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2107c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2107C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2107C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107C4u;
        // 0x2107c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2107C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2107CCu;
}
