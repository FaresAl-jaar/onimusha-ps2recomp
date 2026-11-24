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

// Function: sub_00104B80
// Address: 0x104b80 - 0x104c18
void sub_00104B80_0x104b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104B80_0x104b80");
#endif

    switch (ctx->pc) {
        case 0x104bbcu: goto label_104bbc;
        default: break;
    }

    ctx->pc = 0x104b80u;

    // 0x104b80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x104b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x104b84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x104b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x104b88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x104b88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b8c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x104b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x104b90: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x104b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x104b94: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x104b94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x104b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x104b9c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x104b9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ba0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x104ba4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x104ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104bac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x104bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104bb0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x104bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x104bb4: 0xc041298  jal         func_104A60
    ctx->pc = 0x104BB4u;
    SET_GPR_U32(ctx, 31, 0x104BBCu);
    ctx->pc = 0x104BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BB4u;
    // 0x104bb8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x104BB4u, 0x104BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BBCu;
label_104bbc:
    // 0x104bbc: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x104bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x104bc0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x104bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x104bc4: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x104bc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x104bc8: 0x3c039fff  lui         $v1, 0x9FFF
    ctx->pc = 0x104bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40959 << 16));
    // 0x104bcc: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x104bccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x104bd0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x104bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x104bd4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x104bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x104bd8: 0x2439024  and         $s2, $s2, $v1
    ctx->pc = 0x104bd8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x104bdc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x104bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x104be0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x104be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104be4: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x104be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x104be8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x104be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x104bec: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x104becu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x104bf0: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x104bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x104bf4: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x104bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x104bf8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x104bf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104bfc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104bfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104c00: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104c00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104c04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104c04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104c08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104c10: 0x3e00008  jr          $ra
    ctx->pc = 0x104C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C10u;
        // 0x104c14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104C18u;
}
