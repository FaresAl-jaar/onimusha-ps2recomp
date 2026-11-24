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

// Function: sub_002901D0
// Address: 0x2901d0 - 0x29024c
void sub_002901D0_0x2901d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002901D0_0x2901d0");
#endif

    switch (ctx->pc) {
        case 0x290214u: goto label_290214;
        case 0x29023cu: goto label_29023c;
        default: break;
    }

    ctx->pc = 0x2901d0u;

    // 0x2901d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2901d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2901d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2901d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2901d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2901d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2901dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2901dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2901e0: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x2901e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2901e4: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2901e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2901e8: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2901e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2901ec: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2901ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2901f0: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2901f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2901f4: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2901f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2901f8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2901f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2901fc: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2901FCu;
    {
        const bool branch_taken_0x2901fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x290200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901FCu;
        // 0x290200: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901fc) {
            ctx->pc = 0x290220u;
            goto label_290220;
        }
    }
    ctx->pc = 0x290204u;
    // 0x290204: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x290204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x290208: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x290208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29020c: 0xc0d0a70  jal         func_3429C0
    ctx->pc = 0x29020Cu;
    SET_GPR_U32(ctx, 31, 0x290214u);
    ctx->pc = 0x290210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29020Cu;
    // 0x290210: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429C0u, 0x29020Cu, 0x290214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290214u;
label_290214:
    // 0x290214: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x290214u;
    {
        const bool branch_taken_0x290214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290214) {
            ctx->pc = 0x290240u;
            goto label_290240;
        }
    }
    ctx->pc = 0x29021Cu;
    // 0x29021c: 0x0  nop
    ctx->pc = 0x29021cu;
    // NOP
label_290220:
    // 0x290220: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x290220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290224: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x290224u;
    {
        const bool branch_taken_0x290224 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x290224) {
            ctx->pc = 0x290240u;
            goto label_290240;
        }
    }
    ctx->pc = 0x29022Cu;
    // 0x29022c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29022cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290230: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x290230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x290234: 0xc0d0aa4  jal         func_342A90
    ctx->pc = 0x290234u;
    SET_GPR_U32(ctx, 31, 0x29023Cu);
    ctx->pc = 0x290238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290234u;
    // 0x290238: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A90u, 0x290234u, 0x29023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29023Cu;
label_29023c:
    // 0x29023c: 0x0  nop
    ctx->pc = 0x29023cu;
    // NOP
label_290240:
    // 0x290240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290244: 0x3e00008  jr          $ra
    ctx->pc = 0x290244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290244u;
        // 0x290248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29024Cu;
}
