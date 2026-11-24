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

// Function: sub_0014E480
// Address: 0x14e480 - 0x14e4fc
void sub_0014E480_0x14e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E480_0x14e480");
#endif

    switch (ctx->pc) {
        case 0x14e4ecu: goto label_14e4ec;
        default: break;
    }

    ctx->pc = 0x14e480u;

    // 0x14e480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14e484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e488: 0x90a300e4  lbu         $v1, 0xE4($a1)
    ctx->pc = 0x14e488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x14e48c: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x14e48cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14e490: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x14E490u;
    {
        const bool branch_taken_0x14e490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e490) {
            ctx->pc = 0x14E4F0u;
            goto label_14e4f0;
        }
    }
    ctx->pc = 0x14E498u;
    // 0x14e498: 0x8ca200ec  lw          $v0, 0xEC($a1)
    ctx->pc = 0x14e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e49c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x14e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e4a0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x14e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14e4a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e4a8: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x14e4a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e4ac: 0x9102001d  lbu         $v0, 0x1D($t0)
    ctx->pc = 0x14e4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 29)));
    // 0x14e4b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E4B0u;
    {
        const bool branch_taken_0x14e4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4B0u;
        // 0x14e4b4: 0x25030040  addiu       $v1, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4b0) {
            ctx->pc = 0x14E4C8u;
            goto label_14e4c8;
        }
    }
    ctx->pc = 0x14E4B8u;
    // 0x14e4b8: 0x250200c0  addiu       $v0, $t0, 0xC0
    ctx->pc = 0x14e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x14e4bc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14e4bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e4c0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x14e4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x14e4c4: 0x0  nop
    ctx->pc = 0x14e4c4u;
    // NOP
label_14e4c8:
    // 0x14e4c8: 0xa500001a  sh          $zero, 0x1A($t0)
    ctx->pc = 0x14e4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x14e4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e4d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14e4d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4d4: 0xa102001d  sb          $v0, 0x1D($t0)
    ctx->pc = 0x14e4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x14e4d8: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x14e4d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14e4dc: 0x250200c0  addiu       $v0, $t0, 0xC0
    ctx->pc = 0x14e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x14e4e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14e4e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4e4: 0xc0539d0  jal         func_14E740
    ctx->pc = 0x14E4E4u;
    SET_GPR_U32(ctx, 31, 0x14E4ECu);
    ctx->pc = 0x14E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4E4u;
    // 0x14e4e8: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E740u, 0x14E4E4u, 0x14E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4ECu;
label_14e4ec:
    // 0x14e4ec: 0x0  nop
    ctx->pc = 0x14e4ecu;
    // NOP
label_14e4f0:
    // 0x14e4f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x14E4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4F4u;
        // 0x14e4f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E4FCu;
}
