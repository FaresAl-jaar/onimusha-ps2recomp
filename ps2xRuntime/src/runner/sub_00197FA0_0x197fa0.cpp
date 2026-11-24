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

// Function: sub_00197FA0
// Address: 0x197fa0 - 0x198070
void sub_00197FA0_0x197fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197FA0_0x197fa0");
#endif

    switch (ctx->pc) {
        case 0x198008u: goto label_198008;
        case 0x198030u: goto label_198030;
        case 0x198058u: goto label_198058;
        default: break;
    }

    ctx->pc = 0x197fa0u;

    // 0x197fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x197fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x197fa4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x197fa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197fa8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x197fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x197fac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x197facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197fb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197fb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x197fb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197fbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x197fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197fc0: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197FC0u;
    {
        const bool branch_taken_0x197fc0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x197FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FC0u;
        // 0x197fc4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fc0) {
            ctx->pc = 0x197FD0u;
            goto label_197fd0;
        }
    }
    ctx->pc = 0x197FC8u;
    // 0x197fc8: 0x86420012  lh          $v0, 0x12($s2)
    ctx->pc = 0x197fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x197fcc: 0x24490080  addiu       $t1, $v0, 0x80
    ctx->pc = 0x197fccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_197fd0:
    // 0x197fd0: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x197fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x197fd4: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x197fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x197fd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x197fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x197fdc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x197fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x197fe0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x197FE0u;
    {
        const bool branch_taken_0x197fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FE0u;
        // 0x197fe4: 0x306800ff  andi        $t0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fe0) {
            ctx->pc = 0x198010u;
            goto label_198010;
        }
    }
    ctx->pc = 0x197FE8u;
    // 0x197fe8: 0x11343c  dsll32      $a2, $s1, 16
    ctx->pc = 0x197fe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
    // 0x197fec: 0x103c3c  dsll32      $a3, $s0, 16
    ctx->pc = 0x197fecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 16));
    // 0x197ff0: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x197ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x197ff4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x197ff4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x197ff8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x197ff8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x197ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198000: 0xc066ec4  jal         func_19BB10
    ctx->pc = 0x198000u;
    SET_GPR_U32(ctx, 31, 0x198008u);
    ctx->pc = 0x198004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198000u;
    // 0x198004: 0x24a5dac0  addiu       $a1, $a1, -0x2540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB10u, 0x198000u, 0x198008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198008u;
label_198008:
    // 0x198008: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x198008u;
    {
        const bool branch_taken_0x198008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198008) {
            ctx->pc = 0x198058u;
            goto label_198058;
        }
    }
    ctx->pc = 0x198010u;
label_198010:
    // 0x198010: 0x11343c  dsll32      $a2, $s1, 16
    ctx->pc = 0x198010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
    // 0x198014: 0x103c3c  dsll32      $a3, $s0, 16
    ctx->pc = 0x198014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 16));
    // 0x198018: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x198018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x19801c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x19801cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x198020: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x198020u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x198024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198028: 0xc066ec4  jal         func_19BB10
    ctx->pc = 0x198028u;
    SET_GPR_U32(ctx, 31, 0x198030u);
    ctx->pc = 0x19802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198028u;
    // 0x19802c: 0x24a5daea  addiu       $a1, $a1, -0x2516 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957802));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB10u, 0x198028u, 0x198030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198030u;
label_198030:
    // 0x198030: 0x11343c  dsll32      $a2, $s1, 16
    ctx->pc = 0x198030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
    // 0x198034: 0x103c3c  dsll32      $a3, $s0, 16
    ctx->pc = 0x198034u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 16));
    // 0x198038: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x198038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x19803c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x19803cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x198040: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x198040u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x198044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198048: 0x24a5daf8  addiu       $a1, $a1, -0x2508
    ctx->pc = 0x198048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957816));
    // 0x19804c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19804cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198050: 0xc066ec4  jal         func_19BB10
    ctx->pc = 0x198050u;
    SET_GPR_U32(ctx, 31, 0x198058u);
    ctx->pc = 0x198054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198050u;
    // 0x198054: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB10u, 0x198050u, 0x198058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198058u;
label_198058:
    // 0x198058: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x198058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19805c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19805cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198068: 0x3e00008  jr          $ra
    ctx->pc = 0x198068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198068u;
        // 0x19806c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198070u;
}
