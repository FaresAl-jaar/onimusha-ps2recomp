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

// Function: sub_0032C760
// Address: 0x32c760 - 0x32c800
void sub_0032C760_0x32c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C760_0x32c760");
#endif

    switch (ctx->pc) {
        case 0x32c77cu: goto label_32c77c;
        case 0x32c7b8u: goto label_32c7b8;
        default: break;
    }

    ctx->pc = 0x32c760u;

    // 0x32c760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32c764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32c768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c76c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32c76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c770: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32c770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32c774: 0xc063d48  jal         func_18F520
    ctx->pc = 0x32C774u;
    SET_GPR_U32(ctx, 31, 0x32C77Cu);
    ctx->pc = 0x32C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C774u;
    // 0x32c778: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x32C774u, 0x32C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C77Cu;
label_32c77c:
    // 0x32c77c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x32C77Cu;
    {
        const bool branch_taken_0x32c77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c77c) {
            ctx->pc = 0x32C7F0u;
            goto label_32c7f0;
        }
    }
    ctx->pc = 0x32C784u;
    // 0x32c784: 0x92060007  lbu         $a2, 0x7($s0)
    ctx->pc = 0x32c784u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x32c788: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x32c788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32c78c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32c790: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x32c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32c794: 0x86280a  movz        $a1, $a0, $a2
    ctx->pc = 0x32c794u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x32c798: 0xa2050000  sb          $a1, 0x0($s0)
    ctx->pc = 0x32c798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x32c79c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x32c79cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c7a0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x32c7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c7a4: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x32c7a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x32c7a8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C7A8u;
    {
        const bool branch_taken_0x32c7a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x32C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7A8u;
        // 0x32c7ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c7a8) {
            ctx->pc = 0x32C7B8u;
            goto label_32c7b8;
        }
    }
    ctx->pc = 0x32C7B0u;
    // 0x32c7b0: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x32C7B0u;
    SET_GPR_U32(ctx, 31, 0x32C7B8u);
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x32C7B0u, 0x32C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C7B8u;
label_32c7b8:
    // 0x32c7b8: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x32c7b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x32c7bc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32C7BCu;
    {
        const bool branch_taken_0x32c7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c7bc) {
            ctx->pc = 0x32C7F0u;
            goto label_32c7f0;
        }
    }
    ctx->pc = 0x32C7C4u;
    // 0x32c7c4: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x32c7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c7c8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x32c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x32c7cc: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x32c7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x32c7d0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x32c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x32c7d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c7d8: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x32c7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x32c7dc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x32c7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c7e0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x32c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x32c7e4: 0xa2040006  sb          $a0, 0x6($s0)
    ctx->pc = 0x32c7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x32c7e8: 0xa203000f  sb          $v1, 0xF($s0)
    ctx->pc = 0x32c7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x32c7ec: 0x0  nop
    ctx->pc = 0x32c7ecu;
    // NOP
label_32c7f0:
    // 0x32c7f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32c7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c7f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x32C7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7F8u;
        // 0x32c7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C800u;
}
