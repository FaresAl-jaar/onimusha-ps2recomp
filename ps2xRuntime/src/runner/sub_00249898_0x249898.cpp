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

// Function: sub_00249898
// Address: 0x249898 - 0x24995c
void sub_00249898_0x249898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249898_0x249898");
#endif

    switch (ctx->pc) {
        case 0x2498bcu: goto label_2498bc;
        case 0x2498c4u: goto label_2498c4;
        case 0x249938u: goto label_249938;
        default: break;
    }

    ctx->pc = 0x249898u;

    // 0x249898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24989c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2498a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2498a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2498a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2498a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2498a8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2498a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2498ac: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2498ACu;
    {
        const bool branch_taken_0x2498ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2498ac) {
            ctx->pc = 0x2498B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2498ACu;
            // 0x2498b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249950u;
            goto label_249950;
        }
    }
    ctx->pc = 0x2498B4u;
    // 0x2498b4: 0xc094bb4  jal         func_252ED0
    ctx->pc = 0x2498B4u;
    SET_GPR_U32(ctx, 31, 0x2498BCu);
    ctx->pc = 0x252ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252ED0u, 0x2498B4u, 0x2498BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2498BCu;
label_2498bc:
    // 0x2498bc: 0xc0916f6  jal         func_245BD8
    ctx->pc = 0x2498BCu;
    SET_GPR_U32(ctx, 31, 0x2498C4u);
    ctx->pc = 0x2498C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2498BCu;
    // 0x2498c0: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245BD8u, 0x2498BCu, 0x2498C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2498C4u;
label_2498c4:
    // 0x2498c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2498c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2498c8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2498c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2498cc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2498CCu;
    {
        const bool branch_taken_0x2498cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2498cc) {
            ctx->pc = 0x2498D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2498CCu;
            // 0x2498d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249940u;
            goto label_249940;
        }
    }
    ctx->pc = 0x2498D4u;
    // 0x2498d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2498d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2498d8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2498d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2498dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2498dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2498e0: 0x8c63d260  lw          $v1, -0x2DA0($v1)
    ctx->pc = 0x2498e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955616)));
    // 0x2498e4: 0x600008  jr          $v1
    ctx->pc = 0x2498E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2498F0u: goto label_2498f0;
            case 0x249900u: goto label_249900;
            case 0x249928u: goto label_249928;
            case 0x24993Cu: goto label_24993c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2498E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2498ECu;
    // 0x2498ec: 0x0  nop
    ctx->pc = 0x2498ecu;
    // NOP
label_2498f0:
    // 0x2498f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2498f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2498f4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2498f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2498f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2498F8u;
    {
        const bool branch_taken_0x2498f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2498FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498F8u;
        // 0x2498fc: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2498f8) {
            ctx->pc = 0x249930u;
            goto label_249930;
        }
    }
    ctx->pc = 0x249900u;
label_249900:
    // 0x249900: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x249900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x249904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x249904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249908: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x249908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x24990c: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x24990cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x249910: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x249910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x249914: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x249914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x249918: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x249918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x24991c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24991Cu;
    {
        const bool branch_taken_0x24991c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24991Cu;
        // 0x249920: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24991c) {
            ctx->pc = 0x249930u;
            goto label_249930;
        }
    }
    ctx->pc = 0x249924u;
    // 0x249924: 0x0  nop
    ctx->pc = 0x249924u;
    // NOP
label_249928:
    // 0x249928: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x249928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24992c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x24992cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_249930:
    // 0x249930: 0xc091666  jal         func_245998
    ctx->pc = 0x249930u;
    SET_GPR_U32(ctx, 31, 0x249938u);
    ctx->pc = 0x245998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245998u, 0x249930u, 0x249938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249938u;
label_249938:
    // 0x249938: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x249938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_24993c:
    // 0x24993c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24993cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249940:
    // 0x249940: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x249940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249944: 0x8094bd2  j           func_252F48
    ctx->pc = 0x249944u;
    ctx->pc = 0x249948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249944u;
    // 0x249948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252F48u;
    sub_00252F48_0x252f48(rdram, ctx, runtime); return;
    ctx->pc = 0x24994Cu;
    // 0x24994c: 0x0  nop
    ctx->pc = 0x24994cu;
    // NOP
label_249950:
    // 0x249950: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x249950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249954: 0x3e00008  jr          $ra
    ctx->pc = 0x249954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249954u;
        // 0x249958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24995Cu;
}
