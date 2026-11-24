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

// Function: sub_002A12D0
// Address: 0x2a12d0 - 0x2a132c
void sub_002A12D0_0x2a12d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A12D0_0x2a12d0");
#endif

    ctx->pc = 0x2a12d0u;

    // 0x2a12d0: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x2a12d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2a12d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a12d8: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x2a12d8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x2a12dc: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A12DCu;
    {
        const bool branch_taken_0x2a12dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a12dc) {
            ctx->pc = 0x2A12ECu;
            goto label_2a12ec;
        }
    }
    ctx->pc = 0x2A12E4u;
    // 0x2a12e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A12E4u;
    {
        const bool branch_taken_0x2a12e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12E4u;
        // 0x2a12e8: 0x24c70010  addiu       $a3, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a12e4) {
            ctx->pc = 0x2A12F8u;
            goto label_2a12f8;
        }
    }
    ctx->pc = 0x2A12ECu;
label_2a12ec:
    // 0x2a12ec: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x2a12ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x2a12f0: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x2a12f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2a12f4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x2a12f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2a12f8:
    // 0x2a12f8: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x2a12f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a12fc: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2a12fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a1300: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x2a1300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2a1304: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a1304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a1308: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x2a1308u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2a130c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2a130cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1310: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a1310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a1314: 0xac8700c0  sw          $a3, 0xC0($a0)
    ctx->pc = 0x2a1314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 7));
    // 0x2a1318: 0xe48c0030  swc1        $f12, 0x30($a0)
    ctx->pc = 0x2a1318u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2a131c: 0xe48d0034  swc1        $f13, 0x34($a0)
    ctx->pc = 0x2a131cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2a1320: 0xe48e0038  swc1        $f14, 0x38($a0)
    ctx->pc = 0x2a1320u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2a1324: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1324u;
        // 0x2a1328: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A132Cu;
}
