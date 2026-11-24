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

// Function: sub_0038F3D0
// Address: 0x38f3d0 - 0x38f500
void sub_0038F3D0_0x38f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F3D0_0x38f3d0");
#endif

    switch (ctx->pc) {
        case 0x38f3e8u: goto label_38f3e8;
        case 0x38f410u: goto label_38f410;
        case 0x38f418u: goto label_38f418;
        case 0x38f430u: goto label_38f430;
        case 0x38f438u: goto label_38f438;
        case 0x38f470u: goto label_38f470;
        case 0x38f4a8u: goto label_38f4a8;
        case 0x38f4b0u: goto label_38f4b0;
        case 0x38f4b8u: goto label_38f4b8;
        case 0x38f4e8u: goto label_38f4e8;
        default: break;
    }

    ctx->pc = 0x38f3d0u;

    // 0x38f3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38f3d4: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x38f3d4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x38f3d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38f3dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38f3e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38f3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f3e4: 0x0  nop
    ctx->pc = 0x38f3e4u;
    // NOP
label_38f3e8:
    // 0x38f3e8: 0x92032b4d  lbu         $v1, 0x2B4D($s0)
    ctx->pc = 0x38f3e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11085)));
    // 0x38f3ec: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x38f3ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x38f3f0: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x38F3F0u;
    {
        const bool branch_taken_0x38f3f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3F0u;
        // 0x38f3f4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f3f0) {
            ctx->pc = 0x38F4E8u;
            goto label_38f4e8;
        }
    }
    ctx->pc = 0x38F3F8u;
    // 0x38f3f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38f3fc: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x38f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
    // 0x38f400: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38f400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38f404: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38f404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38f408: 0x600008  jr          $v1
    ctx->pc = 0x38F408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38F410u: goto label_38f410;
            case 0x38F418u: goto label_38f418;
            case 0x38F430u: goto label_38f430;
            case 0x38F438u: goto label_38f438;
            case 0x38F4A8u: goto label_38f4a8;
            case 0x38F4B0u: goto label_38f4b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F408u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38F410u;
label_38f410:
    // 0x38f410: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38f410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f414: 0xa2032b4d  sb          $v1, 0x2B4D($s0)
    ctx->pc = 0x38f414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11085), (uint8_t)GPR_U32(ctx, 3));
label_38f418:
    // 0x38f418: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x38f418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x38f41c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x38f41cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x38f420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38f420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f424: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38f424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38f428: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x38F428u;
    {
        const bool branch_taken_0x38f428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F428u;
        // 0x38f42c: 0xa2032b4d  sb          $v1, 0x2B4D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11085), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f428) {
            ctx->pc = 0x38F4E8u;
            goto label_38f4e8;
        }
    }
    ctx->pc = 0x38F430u;
label_38f430:
    // 0x38f430: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38f430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38f434: 0xa2032b4d  sb          $v1, 0x2B4D($s0)
    ctx->pc = 0x38f434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11085), (uint8_t)GPR_U32(ctx, 3));
label_38f438:
    // 0x38f438: 0x92032b3c  lbu         $v1, 0x2B3C($s0)
    ctx->pc = 0x38f438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11068)));
    // 0x38f43c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x38F43Cu;
    {
        const bool branch_taken_0x38f43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f43c) {
            ctx->pc = 0x38F460u;
            goto label_38f460;
        }
    }
    ctx->pc = 0x38F444u;
    // 0x38f444: 0x92042b4c  lbu         $a0, 0x2B4C($s0)
    ctx->pc = 0x38f444u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x38f448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38f448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f44c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F44Cu;
    {
        const bool branch_taken_0x38f44c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x38F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F44Cu;
        // 0x38f450: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f44c) {
            ctx->pc = 0x38F460u;
            goto label_38f460;
        }
    }
    ctx->pc = 0x38F454u;
    // 0x38f454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38f454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f458: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x38F458u;
    {
        const bool branch_taken_0x38f458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F458u;
        // 0x38f45c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f458) {
            ctx->pc = 0x38F498u;
            goto label_38f498;
        }
    }
    ctx->pc = 0x38F460u;
label_38f460:
    // 0x38f460: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x38f460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x38f464: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38f464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38f468: 0xc0975a8  jal         func_25D6A0
    ctx->pc = 0x38F468u;
    SET_GPR_U32(ctx, 31, 0x38F470u);
    ctx->pc = 0x25D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D6A0u, 0x38F468u, 0x38F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F470u;
label_38f470:
    // 0x38f470: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38F470u;
    {
        const bool branch_taken_0x38f470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F470u;
        // 0x38f474: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f470) {
            ctx->pc = 0x38F488u;
            goto label_38f488;
        }
    }
    ctx->pc = 0x38F478u;
    // 0x38f478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38f478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f47c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38F47Cu;
    {
        const bool branch_taken_0x38f47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F47Cu;
        // 0x38f480: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f47c) {
            ctx->pc = 0x38F498u;
            goto label_38f498;
        }
    }
    ctx->pc = 0x38F484u;
    // 0x38f484: 0x0  nop
    ctx->pc = 0x38f484u;
    // NOP
label_38f488:
    // 0x38f488: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x38f488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x38f48c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x38f48cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x38f490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38f490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f494: 0x0  nop
    ctx->pc = 0x38f494u;
    // NOP
label_38f498:
    // 0x38f498: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38f498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38f49c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x38F49Cu;
    {
        const bool branch_taken_0x38f49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F49Cu;
        // 0x38f4a0: 0xa2032b4d  sb          $v1, 0x2B4D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11085), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f49c) {
            ctx->pc = 0x38F4E8u;
            goto label_38f4e8;
        }
    }
    ctx->pc = 0x38F4A4u;
    // 0x38f4a4: 0x0  nop
    ctx->pc = 0x38f4a4u;
    // NOP
label_38f4a8:
    // 0x38f4a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x38f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38f4ac: 0xa2022b4d  sb          $v0, 0x2B4D($s0)
    ctx->pc = 0x38f4acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11085), (uint8_t)GPR_U32(ctx, 2));
label_38f4b0:
    // 0x38f4b0: 0xc0e3818  jal         func_38E060
    ctx->pc = 0x38F4B0u;
    SET_GPR_U32(ctx, 31, 0x38F4B8u);
    ctx->pc = 0x38F4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F4B0u;
    // 0x38f4b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E060u, 0x38F4B0u, 0x38F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F4B8u;
label_38f4b8:
    // 0x38f4b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38F4B8u;
    {
        const bool branch_taken_0x38f4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4B8u;
        // 0x38f4bc: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f4b8) {
            ctx->pc = 0x38F4D0u;
            goto label_38f4d0;
        }
    }
    ctx->pc = 0x38F4C0u;
    // 0x38f4c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38f4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f4c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38F4C4u;
    {
        const bool branch_taken_0x38f4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4C4u;
        // 0x38f4c8: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f4c4) {
            ctx->pc = 0x38F4E0u;
            goto label_38f4e0;
        }
    }
    ctx->pc = 0x38F4CCu;
    // 0x38f4cc: 0x0  nop
    ctx->pc = 0x38f4ccu;
    // NOP
label_38f4d0:
    // 0x38f4d0: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x38f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x38f4d4: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x38f4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x38f4d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38f4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f4dc: 0x0  nop
    ctx->pc = 0x38f4dcu;
    // NOP
label_38f4e0:
    // 0x38f4e0: 0xa2002b4d  sb          $zero, 0x2B4D($s0)
    ctx->pc = 0x38f4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11085), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f4e4: 0x0  nop
    ctx->pc = 0x38f4e4u;
    // NOP
label_38f4e8:
    // 0x38f4e8: 0x14a0ffbf  bnez        $a1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x38F4E8u;
    {
        const bool branch_taken_0x38f4e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f4e8) {
            ctx->pc = 0x38F3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f3e8;
        }
    }
    ctx->pc = 0x38F4F0u;
    // 0x38f4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x38F4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4F8u;
        // 0x38f4fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F500u;
}
