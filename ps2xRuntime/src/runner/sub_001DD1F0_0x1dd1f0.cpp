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

// Function: sub_001DD1F0
// Address: 0x1dd1f0 - 0x1dd254
void sub_001DD1F0_0x1dd1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD1F0_0x1dd1f0");
#endif

    switch (ctx->pc) {
        case 0x1dd214u: goto label_1dd214;
        case 0x1dd238u: goto label_1dd238;
        default: break;
    }

    ctx->pc = 0x1dd1f0u;

    // 0x1dd1f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd1f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dd1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dd1f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dd1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dd1fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd200: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dd200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd204: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dd204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd208: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dd208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd20c: 0xc076f20  jal         func_1DBC80
    ctx->pc = 0x1DD20Cu;
    SET_GPR_U32(ctx, 31, 0x1DD214u);
    ctx->pc = 0x1DD210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD20Cu;
    // 0x1dd210: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC80u, 0x1DD20Cu, 0x1DD214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD214u;
label_1dd214:
    // 0x1dd214: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1dd214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x1dd218: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1dd218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1dd21c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1dd21cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1dd220: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x1dd220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x1dd224: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1dd224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dd228: 0x90470003  lbu         $a3, 0x3($v0)
    ctx->pc = 0x1dd228u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1dd22c: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1dd22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dd230: 0xc07cd5c  jal         func_1F3570
    ctx->pc = 0x1DD230u;
    SET_GPR_U32(ctx, 31, 0x1DD238u);
    ctx->pc = 0x1DD234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD230u;
    // 0x1dd234: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3570u, 0x1DD230u, 0x1DD238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD238u;
label_1dd238:
    // 0x1dd238: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dd238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd240: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dd240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd24c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD24Cu;
        // 0x1dd250: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD254u;
}
