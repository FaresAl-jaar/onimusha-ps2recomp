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

// Function: sub_003D2330
// Address: 0x3d2330 - 0x3d23f0
void sub_003D2330_0x3d2330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2330_0x3d2330");
#endif

    switch (ctx->pc) {
        case 0x3d2398u: goto label_3d2398;
        case 0x3d23b0u: goto label_3d23b0;
        case 0x3d23c8u: goto label_3d23c8;
        case 0x3d23d0u: goto label_3d23d0;
        default: break;
    }

    ctx->pc = 0x3d2330u;

    // 0x3d2330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d2330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d2334: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d2334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d2338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d233c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d2340: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3d2340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d2344: 0x10650022  beq         $v1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3D2344u;
    {
        const bool branch_taken_0x3d2344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3D2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2344u;
        // 0x3d2348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2344) {
            ctx->pc = 0x3D23D0u;
            goto label_3d23d0;
        }
    }
    ctx->pc = 0x3D234Cu;
    // 0x3d234c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D234Cu;
    {
        const bool branch_taken_0x3d234c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d234c) {
            ctx->pc = 0x3D2360u;
            goto label_3d2360;
        }
    }
    ctx->pc = 0x3D2354u;
    // 0x3d2354: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D2354u;
    {
        const bool branch_taken_0x3d2354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2354) {
            ctx->pc = 0x3D23E0u;
            goto label_3d23e0;
        }
    }
    ctx->pc = 0x3D235Cu;
    // 0x3d235c: 0x0  nop
    ctx->pc = 0x3d235cu;
    // NOP
label_3d2360:
    // 0x3d2360: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d2360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d2364: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d2364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d2368: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d2368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d236c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3d236cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d2370: 0xa60007f2  sh          $zero, 0x7F2($s0)
    ctx->pc = 0x3d2370u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d2374: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3d2374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d2378: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d2378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d237c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3d237cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3d2380: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x3d2380u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d2384: 0x92032b20  lbu         $v1, 0x2B20($s0)
    ctx->pc = 0x3d2384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3d2388: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D2388u;
    {
        const bool branch_taken_0x3d2388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2388) {
            ctx->pc = 0x3D23D0u;
            goto label_3d23d0;
        }
    }
    ctx->pc = 0x3D2390u;
    // 0x3d2390: 0xc0c0894  jal         func_302250
    ctx->pc = 0x3D2390u;
    SET_GPR_U32(ctx, 31, 0x3D2398u);
    ctx->pc = 0x3D2394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2390u;
    // 0x3d2394: 0x8e042b28  lw          $a0, 0x2B28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302250u, 0x3D2390u, 0x3D2398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2398u;
label_3d2398:
    // 0x3d2398: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3D2398u;
    {
        const bool branch_taken_0x3d2398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2398) {
            ctx->pc = 0x3D23D0u;
            goto label_3d23d0;
        }
    }
    ctx->pc = 0x3D23A0u;
    // 0x3d23a0: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x3d23a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3d23a4: 0x92062b21  lbu         $a2, 0x2B21($s0)
    ctx->pc = 0x3d23a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11041)));
    // 0x3d23a8: 0xc0bc848  jal         func_2F2120
    ctx->pc = 0x3D23A8u;
    SET_GPR_U32(ctx, 31, 0x3D23B0u);
    ctx->pc = 0x3D23ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D23A8u;
    // 0x3d23ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2120u, 0x3D23A8u, 0x3D23B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23B0u;
label_3d23b0:
    // 0x3d23b0: 0xae022b28  sw          $v0, 0x2B28($s0)
    ctx->pc = 0x3d23b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11048), GPR_U32(ctx, 2));
    // 0x3d23b4: 0x8e032b28  lw          $v1, 0x2B28($s0)
    ctx->pc = 0x3d23b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d23b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D23B8u;
    {
        const bool branch_taken_0x3d23b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23B8u;
        // 0x3d23bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d23b8) {
            ctx->pc = 0x3D23D0u;
            goto label_3d23d0;
        }
    }
    ctx->pc = 0x3D23C0u;
    // 0x3d23c0: 0xc0f48ac  jal         func_3D22B0
    ctx->pc = 0x3D23C0u;
    SET_GPR_U32(ctx, 31, 0x3D23C8u);
    ctx->pc = 0x3D23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D23C0u;
    // 0x3d23c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D22B0u, 0x3D23C0u, 0x3D23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23C8u;
label_3d23c8:
    // 0x3d23c8: 0xc0d0434  jal         func_3410D0
    ctx->pc = 0x3D23C8u;
    SET_GPR_U32(ctx, 31, 0x3D23D0u);
    ctx->pc = 0x3D23CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D23C8u;
    // 0x3d23cc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410D0u, 0x3D23C8u, 0x3D23D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23D0u;
label_3d23d0:
    // 0x3d23d0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3d23d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3d23d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D23D4u;
    {
        const bool branch_taken_0x3d23d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23D4u;
        // 0x3d23d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d23d4) {
            ctx->pc = 0x3D23E0u;
            goto label_3d23e0;
        }
    }
    ctx->pc = 0x3D23DCu;
    // 0x3d23dc: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d23dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3d23e0:
    // 0x3d23e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d23e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d23e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d23e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d23e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D23E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23E8u;
        // 0x3d23ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D23E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D23F0u;
}
