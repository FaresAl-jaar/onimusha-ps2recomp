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

// Function: sub_003630B0
// Address: 0x3630b0 - 0x363174
void sub_003630B0_0x3630b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003630B0_0x3630b0");
#endif

    switch (ctx->pc) {
        case 0x3630f0u: goto label_3630f0;
        case 0x363128u: goto label_363128;
        default: break;
    }

    ctx->pc = 0x3630b0u;

    // 0x3630b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3630b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3630b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3630b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3630b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3630b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3630bc: 0x2442a3c0  addiu       $v0, $v0, -0x5C40
    ctx->pc = 0x3630bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943680));
    // 0x3630c0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3630c0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x65A3C0u));
    // 0x3630c4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3630c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3630c8: 0x84430010  lh          $v1, 0x10($v0)
    ctx->pc = 0x3630c8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x65A3D0u));
    // 0x3630cc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3630ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3630d0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x3630d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x3630d4: 0x24020ff2  addiu       $v0, $zero, 0xFF2
    ctx->pc = 0x3630d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4082));
    // 0x3630d8: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x3630d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x3630dc: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x3630dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3630e0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3630E0u;
    {
        const bool branch_taken_0x3630e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3630e0) {
            ctx->pc = 0x363110u;
            goto label_363110;
        }
    }
    ctx->pc = 0x3630E8u;
    // 0x3630e8: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x3630E8u;
    SET_GPR_U32(ctx, 31, 0x3630F0u);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x3630E8u, 0x3630F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3630F0u;
label_3630f0:
    // 0x3630f0: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3630F0u;
    {
        const bool branch_taken_0x3630f0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3630F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630F0u;
        // 0x3630f4: 0x28410012  slti        $at, $v0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3630f0) {
            ctx->pc = 0x363160u;
            goto label_363160;
        }
    }
    ctx->pc = 0x3630F8u;
    // 0x3630f8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x3630F8u;
    {
        const bool branch_taken_0x3630f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3630f8) {
            ctx->pc = 0x363160u;
            goto label_363160;
        }
    }
    ctx->pc = 0x363100u;
    // 0x363100: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x363100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x363104: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x363104u;
    {
        const bool branch_taken_0x363104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363104u;
        // 0x363108: 0x90420010  lbu         $v0, 0x10($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363104) {
            ctx->pc = 0x363168u;
            goto label_363168;
        }
    }
    ctx->pc = 0x36310Cu;
    // 0x36310c: 0x0  nop
    ctx->pc = 0x36310cu;
    // NOP
label_363110:
    // 0x363110: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x363110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x363114: 0x8c23c0f0  lw          $v1, -0x3F10($at)
    ctx->pc = 0x363114u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x91C0F0u));
    // 0x363118: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x363118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x36311c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36311cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363120: 0x2484fb10  addiu       $a0, $a0, -0x4F0
    ctx->pc = 0x363120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966032));
    // 0x363124: 0x0  nop
    ctx->pc = 0x363124u;
    // NOP
label_363128:
    // 0x363128: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x363128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x36312c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x36312cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x363130: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x363130u;
    {
        const bool branch_taken_0x363130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x363134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363130u;
        // 0x363134: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363130) {
            ctx->pc = 0x363150u;
            goto label_363150;
        }
    }
    ctx->pc = 0x363138u;
    // 0x363138: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x363138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x36313c: 0x2442fb1e  addiu       $v0, $v0, -0x4E2
    ctx->pc = 0x36313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966046));
    // 0x363140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x363140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x363144: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x363144u;
    {
        const bool branch_taken_0x363144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363144u;
        // 0x363148: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363144) {
            ctx->pc = 0x363168u;
            goto label_363168;
        }
    }
    ctx->pc = 0x36314Cu;
    // 0x36314c: 0x0  nop
    ctx->pc = 0x36314cu;
    // NOP
label_363150:
    // 0x363150: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x363150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x363154: 0x2ca2003e  sltiu       $v0, $a1, 0x3E
    ctx->pc = 0x363154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)62) ? 1 : 0);
    // 0x363158: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x363158u;
    {
        const bool branch_taken_0x363158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363158u;
        // 0x36315c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363158) {
            ctx->pc = 0x363128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363128;
        }
    }
    ctx->pc = 0x363160u;
label_363160:
    // 0x363160: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x363160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x363164: 0x0  nop
    ctx->pc = 0x363164u;
    // NOP
label_363168:
    // 0x363168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36316c: 0x3e00008  jr          $ra
    ctx->pc = 0x36316Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36316Cu;
        // 0x363170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36316Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363174u;
}
