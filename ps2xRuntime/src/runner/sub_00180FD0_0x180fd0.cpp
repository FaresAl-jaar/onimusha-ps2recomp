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

// Function: sub_00180FD0
// Address: 0x180fd0 - 0x18108c
void sub_00180FD0_0x180fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180FD0_0x180fd0");
#endif

    switch (ctx->pc) {
        case 0x181038u: goto label_181038;
        default: break;
    }

    ctx->pc = 0x180fd0u;

    // 0x180fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180fd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x180fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x180fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180fe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x180fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fe4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x180fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fe8: 0x8c86004c  lw          $a2, 0x4C($a0)
    ctx->pc = 0x180fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x180fec: 0x9085006f  lbu         $a1, 0x6F($a0)
    ctx->pc = 0x180fecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 111)));
    // 0x180ff0: 0x8cc40080  lw          $a0, 0x80($a2)
    ctx->pc = 0x180ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x180ff4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x180ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x180ff8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x180ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x180ffc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x180ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181000: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x181000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x181004: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x181004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x181008: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x181008u;
    {
        const bool branch_taken_0x181008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181008) {
            ctx->pc = 0x181078u;
            goto label_181078;
        }
    }
    ctx->pc = 0x181010u;
    // 0x181010: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x181010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181014: 0x8e260058  lw          $a2, 0x58($s1)
    ctx->pc = 0x181014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x181018: 0xc62c005c  lwc1        $f12, 0x5C($s1)
    ctx->pc = 0x181018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18101c: 0xc62d0060  lwc1        $f13, 0x60($s1)
    ctx->pc = 0x18101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x181020: 0x86280068  lh          $t0, 0x68($s1)
    ctx->pc = 0x181020u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x181024: 0xc62e0064  lwc1        $f14, 0x64($s1)
    ctx->pc = 0x181024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x181028: 0x8629006a  lh          $t1, 0x6A($s1)
    ctx->pc = 0x181028u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 106)));
    // 0x18102c: 0x862a006c  lh          $t2, 0x6C($s1)
    ctx->pc = 0x18102cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x181030: 0xc0a84cc  jal         func_2A1330
    ctx->pc = 0x181030u;
    SET_GPR_U32(ctx, 31, 0x181038u);
    ctx->pc = 0x181034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181030u;
    // 0x181034: 0x8227006e  lb          $a3, 0x6E($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 110)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1330u, 0x181030u, 0x181038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181038u;
label_181038:
    // 0x181038: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x181038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x18103c: 0x9225006f  lbu         $a1, 0x6F($s1)
    ctx->pc = 0x18103cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 111)));
    // 0x181040: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x181040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x181044: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x181044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x181048: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x181048u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18104c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18104cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x181050: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x181050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x181054: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x181054u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x181058: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x181058u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x18105c: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x18105cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x181060: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x181060u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x181064: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x181064u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x181068: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x181068u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x18106c: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x18106cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x181070: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x181070u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x181074: 0x0  nop
    ctx->pc = 0x181074u;
    // NOP
label_181078:
    // 0x181078: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18107c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18107cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181084: 0x3e00008  jr          $ra
    ctx->pc = 0x181084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181084u;
        // 0x181088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18108Cu;
}
