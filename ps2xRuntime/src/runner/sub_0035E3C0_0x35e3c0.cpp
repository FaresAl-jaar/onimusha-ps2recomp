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

// Function: sub_0035E3C0
// Address: 0x35e3c0 - 0x35e460
void sub_0035E3C0_0x35e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E3C0_0x35e3c0");
#endif

    switch (ctx->pc) {
        case 0x35e420u: goto label_35e420;
        default: break;
    }

    ctx->pc = 0x35e3c0u;

    // 0x35e3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e3c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35e3c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35e3cc: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x35e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x35e3d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35e3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e3d4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x35e3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x35e3d8: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x35e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x35e3dc: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x35e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x35e3e0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x35e3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x35e3e4: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x35e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x35e3e8: 0x8c8206ac  lw          $v0, 0x6AC($a0)
    ctx->pc = 0x35e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x35e3ec: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x35e3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x35e3f0: 0xac8206ac  sw          $v0, 0x6AC($a0)
    ctx->pc = 0x35e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 2));
    // 0x35e3f4: 0x8c8206b4  lw          $v0, 0x6B4($a0)
    ctx->pc = 0x35e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x35e3f8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x35e3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x35e3fc: 0xac8206b4  sw          $v0, 0x6B4($a0)
    ctx->pc = 0x35e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 2));
    // 0x35e400: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x35e400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35e404: 0x7c820890  sq          $v0, 0x890($a0)
    ctx->pc = 0x35e404u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2192), GPR_VEC(ctx, 2));
    // 0x35e408: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x35e408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x35e40c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x35e40cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35e410: 0x7c820870  sq          $v0, 0x870($a0)
    ctx->pc = 0x35e410u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2160), GPR_VEC(ctx, 2));
    // 0x35e414: 0xac8708c8  sw          $a3, 0x8C8($a0)
    ctx->pc = 0x35e414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2248), GPR_U32(ctx, 7));
    // 0x35e418: 0xc096988  jal         func_25A620
    ctx->pc = 0x35E418u;
    SET_GPR_U32(ctx, 31, 0x35E420u);
    ctx->pc = 0x35E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E418u;
    // 0x35e41c: 0x26040870  addiu       $a0, $s0, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x35E418u, 0x35E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E420u;
label_35e420:
    // 0x35e420: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35e420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35e424: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35e424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35e428: 0x0  nop
    ctx->pc = 0x35e428u;
    // NOP
    // 0x35e42c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x35e42cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35e430: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x35E430u;
    {
        const bool branch_taken_0x35e430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E430u;
        // 0x35e434: 0x240400e1  addiu       $a0, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e430) {
            ctx->pc = 0x35E448u;
            goto label_35e448;
        }
    }
    ctx->pc = 0x35E438u;
    // 0x35e438: 0x240300b1  addiu       $v1, $zero, 0xB1
    ctx->pc = 0x35e438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x35e43c: 0xa2040822  sb          $a0, 0x822($s0)
    ctx->pc = 0x35e43cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2082), (uint8_t)GPR_U32(ctx, 4));
    // 0x35e440: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35E440u;
    {
        const bool branch_taken_0x35e440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E440u;
        // 0x35e444: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e440) {
            ctx->pc = 0x35E450u;
            goto label_35e450;
        }
    }
    ctx->pc = 0x35E448u;
label_35e448:
    // 0x35e448: 0x240300e1  addiu       $v1, $zero, 0xE1
    ctx->pc = 0x35e448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x35e44c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x35e44cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_35e450:
    // 0x35e450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35e450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e458: 0x3e00008  jr          $ra
    ctx->pc = 0x35E458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E458u;
        // 0x35e45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E460u;
}
