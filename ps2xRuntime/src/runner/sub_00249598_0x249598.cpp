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

// Function: sub_00249598
// Address: 0x249598 - 0x249660
void sub_00249598_0x249598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249598_0x249598");
#endif

    switch (ctx->pc) {
        case 0x249614u: goto label_249614;
        case 0x24961cu: goto label_24961c;
        case 0x249644u: goto label_249644;
        default: break;
    }

    ctx->pc = 0x249598u;

    // 0x249598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24959c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2495a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2495a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2495a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2495a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2495a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495ac: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2495ACu;
    {
        const bool branch_taken_0x2495ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2495B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495ACu;
        // 0x2495b0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495ac) {
            ctx->pc = 0x2495C0u;
            goto label_2495c0;
        }
    }
    ctx->pc = 0x2495B4u;
    // 0x2495b4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2495b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2495b8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2495B8u;
    {
        const bool branch_taken_0x2495b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495B8u;
        // 0x2495bc: 0xa0400b60  sb          $zero, 0xB60($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2912), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495b8) {
            ctx->pc = 0x24964Cu;
            goto label_24964c;
        }
    }
    ctx->pc = 0x2495C0u;
label_2495c0:
    // 0x2495c0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2495c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2495c4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2495c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2495c8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2495C8u;
    {
        const bool branch_taken_0x2495c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2495CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495C8u;
        // 0x2495cc: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495c8) {
            ctx->pc = 0x249600u;
            goto label_249600;
        }
    }
    ctx->pc = 0x2495D0u;
    // 0x2495d0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2495D0u;
    {
        const bool branch_taken_0x2495d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2495D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495D0u;
        // 0x2495d4: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495d0) {
            ctx->pc = 0x249600u;
            goto label_249600;
        }
    }
    ctx->pc = 0x2495D8u;
    // 0x2495d8: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x2495d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x2495dc: 0x2448d060  addiu       $t0, $v0, -0x2FA0
    ctx->pc = 0x2495dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955104));
    // 0x2495e0: 0x24870b60  addiu       $a3, $a0, 0xB60
    ctx->pc = 0x2495e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2912));
    // 0x2495e4: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x2495e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2495e8: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x2495e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x2495ec: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x2495ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4D0B60u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4D0B60u, _value); } while (0);
    // 0x2495f0: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x2495f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4D0B61u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4D0B61u, _value); } while (0);
    // 0x2495f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2495F4u;
    {
        const bool branch_taken_0x2495f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495F4u;
        // 0x2495f8: 0x24910b60  addiu       $s1, $a0, 0xB60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495f4) {
            ctx->pc = 0x24960Cu;
            goto label_24960c;
        }
    }
    ctx->pc = 0x2495FCu;
    // 0x2495fc: 0x0  nop
    ctx->pc = 0x2495fcu;
    // NOP
label_249600:
    // 0x249600: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x249600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x249604: 0xa0800b60  sb          $zero, 0xB60($a0)
    ctx->pc = 0x249604u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4D0B60u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4D0B60u, _value); } while (0);
    // 0x249608: 0x24910b60  addiu       $s1, $a0, 0xB60
    ctx->pc = 0x249608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2912));
label_24960c:
    // 0x24960c: 0xc049dd0  jal         func_127740
    ctx->pc = 0x24960Cu;
    SET_GPR_U32(ctx, 31, 0x249614u);
    ctx->pc = 0x249610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24960Cu;
    // 0x249610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x24960Cu, 0x249614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249614u;
label_249614:
    // 0x249614: 0xc049f18  jal         func_127C60
    ctx->pc = 0x249614u;
    SET_GPR_U32(ctx, 31, 0x24961Cu);
    ctx->pc = 0x249618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249614u;
    // 0x249618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x249614u, 0x24961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24961Cu;
label_24961c:
    // 0x24961c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24961cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249620: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x249620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x249624: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x249624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x249628: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x249628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x24962c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24962Cu;
    {
        const bool branch_taken_0x24962c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x249630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24962Cu;
        // 0x249630: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24962c) {
            ctx->pc = 0x24963Cu;
            goto label_24963c;
        }
    }
    ctx->pc = 0x249634u;
    // 0x249634: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x249634u;
    {
        const bool branch_taken_0x249634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x249638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249634u;
        // 0x249638: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249634) {
            ctx->pc = 0x249650u;
            goto label_249650;
        }
    }
    ctx->pc = 0x24963Cu;
label_24963c:
    // 0x24963c: 0xc049f18  jal         func_127C60
    ctx->pc = 0x24963Cu;
    SET_GPR_U32(ctx, 31, 0x249644u);
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x24963Cu, 0x249644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249644u;
label_249644:
    // 0x249644: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x249644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x249648: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x249648u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_24964c:
    // 0x24964c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24964cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249650:
    // 0x249650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249658: 0x3e00008  jr          $ra
    ctx->pc = 0x249658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249658u;
        // 0x24965c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249660u;
}
