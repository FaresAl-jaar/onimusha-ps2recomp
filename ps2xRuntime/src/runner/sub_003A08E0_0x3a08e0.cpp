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

// Function: sub_003A08E0
// Address: 0x3a08e0 - 0x3a0964
void sub_003A08E0_0x3a08e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A08E0_0x3a08e0");
#endif

    switch (ctx->pc) {
        case 0x3a0958u: goto label_3a0958;
        default: break;
    }

    ctx->pc = 0x3a08e0u;

    // 0x3a08e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a08e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a08e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a08e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a08e8: 0x8f878c54  lw          $a3, -0x73AC($gp)
    ctx->pc = 0x3a08e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    // 0x3a08ec: 0x90e30020  lbu         $v1, 0x20($a3)
    ctx->pc = 0x3a08ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a08f0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A08F0u;
    {
        const bool branch_taken_0x3a08f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A08F0u;
        // 0x3a08f4: 0x24e80020  addiu       $t0, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a08f0) {
            ctx->pc = 0x3A0958u;
            goto label_3a0958;
        }
    }
    ctx->pc = 0x3A08F8u;
    // 0x3a08f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a08f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a08fc: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x3a08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x3a0900: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x3a0900u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x3a0904: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3a0904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3a0908: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x3a0908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x3a090c: 0x248428b0  addiu       $a0, $a0, 0x28B0
    ctx->pc = 0x3a090cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    // 0x3a0910: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x3a0910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a0914: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a0914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a0918: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3a0918u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3a091c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3a091cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3a0920: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a0920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a0924: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x3a0924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x3a0928: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x3a0928u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x3a092c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3a092cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3a0930: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3a0930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a0934: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3a0934u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3a0938: 0x0  nop
    ctx->pc = 0x3a0938u;
    // NOP
    // 0x3a093c: 0x0  nop
    ctx->pc = 0x3a093cu;
    // NOP
    // 0x3a0940: 0x1010  mfhi        $v0
    ctx->pc = 0x3a0940u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3a0944: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a0944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a0948: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3a0948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3a094c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x3a094cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a0950: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x3A0950u;
    SET_GPR_U32(ctx, 31, 0x3A0958u);
    ctx->pc = 0x3A0954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0950u;
    // 0x3a0954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x3A0950u, 0x3A0958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0958u;
label_3a0958:
    // 0x3a0958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a095c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A095Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A095Cu;
        // 0x3a0960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A095Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0964u;
}
