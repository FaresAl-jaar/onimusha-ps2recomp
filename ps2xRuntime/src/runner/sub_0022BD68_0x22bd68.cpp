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

// Function: sub_0022BD68
// Address: 0x22bd68 - 0x22bdcc
void sub_0022BD68_0x22bd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BD68_0x22bd68");
#endif

    switch (ctx->pc) {
        case 0x22bd88u: goto label_22bd88;
        case 0x22bda0u: goto label_22bda0;
        default: break;
    }

    ctx->pc = 0x22bd68u;

    // 0x22bd68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22bd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22bd6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22bd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22bd70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22bd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22bd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22bd78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22bd78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22bd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22bd80: 0xc049f18  jal         func_127C60
    ctx->pc = 0x22BD80u;
    SET_GPR_U32(ctx, 31, 0x22BD88u);
    ctx->pc = 0x22BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD80u;
    // 0x22bd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x22BD80u, 0x22BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD88u;
label_22bd88:
    // 0x22bd88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22bd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22bd90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd94: 0x27a70002  addiu       $a3, $sp, 0x2
    ctx->pc = 0x22bd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x22bd98: 0xc08ac64  jal         func_22B190
    ctx->pc = 0x22BD98u;
    SET_GPR_U32(ctx, 31, 0x22BDA0u);
    ctx->pc = 0x22BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD98u;
    // 0x22bd9c: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B190u, 0x22BD98u, 0x22BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDA0u;
label_22bda0:
    // 0x22bda0: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x22bda0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bda4: 0x97a40002  lhu         $a0, 0x2($sp)
    ctx->pc = 0x22bda4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x22bda8: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x22bda8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22bdac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22bdacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bdb0: 0xa62300a0  sh          $v1, 0xA0($s1)
    ctx->pc = 0x22bdb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x22bdb4: 0xa62200a4  sh          $v0, 0xA4($s1)
    ctx->pc = 0x22bdb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 164), (uint16_t)GPR_U32(ctx, 2));
    // 0x22bdb8: 0xa62400a2  sh          $a0, 0xA2($s1)
    ctx->pc = 0x22bdb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 4));
    // 0x22bdbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22bdbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bdc0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22bdc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22bdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x22BDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDC4u;
        // 0x22bdc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BDCCu;
}
