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

// Function: sub_0014D2B0
// Address: 0x14d2b0 - 0x14d36c
void sub_0014D2B0_0x14d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D2B0_0x14d2b0");
#endif

    switch (ctx->pc) {
        case 0x14d2fcu: goto label_14d2fc;
        case 0x14d334u: goto label_14d334;
        case 0x14d35cu: goto label_14d35c;
        default: break;
    }

    ctx->pc = 0x14d2b0u;

    // 0x14d2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14d2b4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14d2b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d2bc: 0x2442ac50  addiu       $v0, $v0, -0x53B0
    ctx->pc = 0x14d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
    // 0x14d2c0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x14d2c0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x40AC50u));
    // 0x14d2c4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x14d2c4u;
    { uint32_t bits = FAST_READ32(0x40AC60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d2c8: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x14d2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14d2cc: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x14d2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x14d2d0: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x14d2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
    // 0x14d2d4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x14d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x14d2d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D2D8u;
    {
        const bool branch_taken_0x14d2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2D8u;
        // 0x14d2dc: 0xe5000010  swc1        $f0, 0x10($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d2d8) {
            ctx->pc = 0x14D2E8u;
            goto label_14d2e8;
        }
    }
    ctx->pc = 0x14D2E0u;
    // 0x14d2e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14D2E0u;
    {
        const bool branch_taken_0x14d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d2e0) {
            ctx->pc = 0x14D308u;
            goto label_14d308;
        }
    }
    ctx->pc = 0x14D2E8u;
label_14d2e8:
    // 0x14d2e8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14d2ec: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x14d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x14d2f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14d2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d2f4: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x14D2F4u;
    SET_GPR_U32(ctx, 31, 0x14D2FCu);
    ctx->pc = 0x14D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2F4u;
    // 0x14d2f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x14D2F4u, 0x14D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2FCu;
label_14d2fc:
    // 0x14d2fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14D2FCu;
    {
        const bool branch_taken_0x14d2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d2fc) {
            ctx->pc = 0x14D360u;
            goto label_14d360;
        }
    }
    ctx->pc = 0x14D304u;
    // 0x14d304: 0x0  nop
    ctx->pc = 0x14d304u;
    // NOP
label_14d308:
    // 0x14d308: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14d308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14d30c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x14d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x14d310: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14d310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x14d314: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14D314u;
    {
        const bool branch_taken_0x14d314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D314u;
        // 0x14d318: 0x30c200ff  andi        $v0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d314) {
            ctx->pc = 0x14D340u;
            goto label_14d340;
        }
    }
    ctx->pc = 0x14D31Cu;
    // 0x14d31c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14d31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14d320: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d324: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x14d324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x14d328: 0x9046001a  lbu         $a2, 0x1A($v0)
    ctx->pc = 0x14d328u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x14d32c: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x14D32Cu;
    SET_GPR_U32(ctx, 31, 0x14D334u);
    ctx->pc = 0x14D330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D32Cu;
    // 0x14d330: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x14D32Cu, 0x14D334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D334u;
label_14d334:
    // 0x14d334: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14D334u;
    {
        const bool branch_taken_0x14d334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d334) {
            ctx->pc = 0x14D360u;
            goto label_14d360;
        }
    }
    ctx->pc = 0x14D33Cu;
    // 0x14d33c: 0x0  nop
    ctx->pc = 0x14d33cu;
    // NOP
label_14d340:
    // 0x14d340: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x14d340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x14d344: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d348: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14d348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14d34c: 0x90460010  lbu         $a2, 0x10($v0)
    ctx->pc = 0x14d34cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14d350: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x14d350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x14d354: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x14D354u;
    SET_GPR_U32(ctx, 31, 0x14D35Cu);
    ctx->pc = 0x14D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D354u;
    // 0x14d358: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x14D354u, 0x14D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D35Cu;
label_14d35c:
    // 0x14d35c: 0x0  nop
    ctx->pc = 0x14d35cu;
    // NOP
label_14d360:
    // 0x14d360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d364: 0x3e00008  jr          $ra
    ctx->pc = 0x14D364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D364u;
        // 0x14d368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D36Cu;
}
