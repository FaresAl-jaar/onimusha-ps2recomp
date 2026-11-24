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

// Function: sub_00139CC0
// Address: 0x139cc0 - 0x139d08
void sub_00139CC0_0x139cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139CC0_0x139cc0");
#endif

    ctx->pc = 0x139cc0u;

    // 0x139cc0: 0x84820fca  lh          $v0, 0xFCA($a0)
    ctx->pc = 0x139cc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4042)));
    // 0x139cc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x139CC4u;
    {
        const bool branch_taken_0x139cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139cc4) {
            ctx->pc = 0x139CE0u;
            goto label_139ce0;
        }
    }
    ctx->pc = 0x139CCCu;
    // 0x139ccc: 0xc4800fa4  lwc1        $f0, 0xFA4($a0)
    ctx->pc = 0x139cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139cd4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x139CD4u;
    {
        const bool branch_taken_0x139cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CD4u;
        // 0x139cd8: 0xe4800fac  swc1        $f0, 0xFAC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4012), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cd4) {
            ctx->pc = 0x139D00u;
            goto label_139d00;
        }
    }
    ctx->pc = 0x139CDCu;
    // 0x139cdc: 0x0  nop
    ctx->pc = 0x139cdcu;
    // NOP
label_139ce0:
    // 0x139ce0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ce4: 0xc4810fa8  lwc1        $f1, 0xFA8($a0)
    ctx->pc = 0x139ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139ce8: 0xc4800fac  lwc1        $f0, 0xFAC($a0)
    ctx->pc = 0x139ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139cec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x139cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x139cf0: 0xe4800fac  swc1        $f0, 0xFAC($a0)
    ctx->pc = 0x139cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4012), bits); }
    // 0x139cf4: 0x84830fca  lh          $v1, 0xFCA($a0)
    ctx->pc = 0x139cf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4042)));
    // 0x139cf8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x139cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x139cfc: 0xa4830fca  sh          $v1, 0xFCA($a0)
    ctx->pc = 0x139cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4042), (uint16_t)GPR_U32(ctx, 3));
label_139d00:
    // 0x139d00: 0x3e00008  jr          $ra
    ctx->pc = 0x139D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139D08u;
}
