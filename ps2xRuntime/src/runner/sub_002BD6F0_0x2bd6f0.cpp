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

// Function: sub_002BD6F0
// Address: 0x2bd6f0 - 0x2bd774
void sub_002BD6F0_0x2bd6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD6F0_0x2bd6f0");
#endif

    switch (ctx->pc) {
        case 0x2bd71cu: goto label_2bd71c;
        default: break;
    }

    ctx->pc = 0x2bd6f0u;

    // 0x2bd6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd6f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bd6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bd6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd6fc: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2bd6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bd700: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD700u;
    {
        const bool branch_taken_0x2bd700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD700u;
        // 0x2bd704: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd700) {
            ctx->pc = 0x2BD728u;
            goto label_2bd728;
        }
    }
    ctx->pc = 0x2BD708u;
    // 0x2bd708: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x2bd708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bd70c: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x2bd70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x2bd710: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x2bd710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x2bd714: 0xc056e04  jal         func_15B810
    ctx->pc = 0x2BD714u;
    SET_GPR_U32(ctx, 31, 0x2BD71Cu);
    ctx->pc = 0x2BD718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD714u;
    // 0x2bd718: 0x24453500  addiu       $a1, $v0, 0x3500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x2BD714u, 0x2BD71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD71Cu;
label_2bd71c:
    // 0x2bd71c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BD71Cu;
    {
        const bool branch_taken_0x2bd71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd71c) {
            ctx->pc = 0x2BD760u;
            goto label_2bd760;
        }
    }
    ctx->pc = 0x2BD724u;
    // 0x2bd724: 0x0  nop
    ctx->pc = 0x2bd724u;
    // NOP
label_2bd728:
    // 0x2bd728: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2bd728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bd72c: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x2bd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x2bd730: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2bd730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2bd734: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x2bd734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x2bd738: 0x24633500  addiu       $v1, $v1, 0x3500
    ctx->pc = 0x2bd738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13568));
    // 0x2bd73c: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x2bd73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2bd740: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x2bd740u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2bd744: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x2bd744u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x2bd748: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bd748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bd74c: 0x802027  not         $a0, $a0
    ctx->pc = 0x2bd74cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x2bd750: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2bd750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bd754: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bd754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd758: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2bd758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2bd75c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2bd75cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2bd760:
    // 0x2bd760: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2bd760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2bd764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bd764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd76c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD76Cu;
        // 0x2bd770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD774u;
}
