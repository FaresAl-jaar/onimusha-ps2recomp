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

// Function: sub_003B86B0
// Address: 0x3b86b0 - 0x3b8730
void sub_003B86B0_0x3b86b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B86B0_0x3b86b0");
#endif

    switch (ctx->pc) {
        case 0x3b8718u: goto label_3b8718;
        default: break;
    }

    ctx->pc = 0x3b86b0u;

    // 0x3b86b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b86b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b86b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b86b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b86b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b86b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b86bc: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x3b86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x3b86c0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3b86c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3b86c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B86C4u;
    {
        const bool branch_taken_0x3b86c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86C4u;
        // 0x3b86c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b86c4) {
            ctx->pc = 0x3B86E0u;
            goto label_3b86e0;
        }
    }
    ctx->pc = 0x3B86CCu;
    // 0x3b86cc: 0x92032b4b  lbu         $v1, 0x2B4B($s0)
    ctx->pc = 0x3b86ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b86d0: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x3b86d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x3b86d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B86D4u;
    {
        const bool branch_taken_0x3b86d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86D4u;
        // 0x3b86d8: 0xa2032b4b  sb          $v1, 0x2B4B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b86d4) {
            ctx->pc = 0x3B86F0u;
            goto label_3b86f0;
        }
    }
    ctx->pc = 0x3B86DCu;
    // 0x3b86dc: 0x0  nop
    ctx->pc = 0x3b86dcu;
    // NOP
label_3b86e0:
    // 0x3b86e0: 0x92032b4b  lbu         $v1, 0x2B4B($s0)
    ctx->pc = 0x3b86e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b86e4: 0x306300df  andi        $v1, $v1, 0xDF
    ctx->pc = 0x3b86e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)223);
    // 0x3b86e8: 0xa2032b4b  sb          $v1, 0x2B4B($s0)
    ctx->pc = 0x3b86e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b86ec: 0x0  nop
    ctx->pc = 0x3b86ecu;
    // NOP
label_3b86f0:
    // 0x3b86f0: 0x92032b4b  lbu         $v1, 0x2B4B($s0)
    ctx->pc = 0x3b86f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b86f4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3b86f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3b86f8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B86F8u;
    {
        const bool branch_taken_0x3b86f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b86f8) {
            ctx->pc = 0x3B8720u;
            goto label_3b8720;
        }
    }
    ctx->pc = 0x3B8700u;
    // 0x3b8700: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x3b8700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x3b8704: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3b8704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3b8708: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8708u;
    {
        const bool branch_taken_0x3b8708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8708u;
        // 0x3b870c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8708) {
            ctx->pc = 0x3B8718u;
            goto label_3b8718;
        }
    }
    ctx->pc = 0x3B8710u;
    // 0x3b8710: 0xc0ee184  jal         func_3B8610
    ctx->pc = 0x3B8710u;
    SET_GPR_U32(ctx, 31, 0x3B8718u);
    ctx->pc = 0x3B8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8610u, 0x3B8710u, 0x3B8718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8718u;
label_3b8718:
    // 0x3b8718: 0x92032b85  lbu         $v1, 0x2B85($s0)
    ctx->pc = 0x3b8718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11141)));
    // 0x3b871c: 0xa2032b07  sb          $v1, 0x2B07($s0)
    ctx->pc = 0x3b871cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11015), (uint8_t)GPR_U32(ctx, 3));
label_3b8720:
    // 0x3b8720: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b8720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b8724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8728: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8728u;
        // 0x3b872c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8730u;
}
