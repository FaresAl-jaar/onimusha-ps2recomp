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

// Function: sub_0024D0C0
// Address: 0x24d0c0 - 0x24d1c0
void sub_0024D0C0_0x24d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D0C0_0x24d0c0");
#endif

    switch (ctx->pc) {
        case 0x24d0f8u: goto label_24d0f8;
        case 0x24d150u: goto label_24d150;
        case 0x24d17cu: goto label_24d17c;
        case 0x24d1a0u: goto label_24d1a0;
        default: break;
    }

    ctx->pc = 0x24d0c0u;

    // 0x24d0c0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24d0c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24d0c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24d0c8: 0x244264e8  addiu       $v0, $v0, 0x64E8
    ctx->pc = 0x24d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25832));
    // 0x24d0cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24d0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24d0d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24d0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24d0d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24d0d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d0d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24d0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d0dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24d0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d0e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d0e4: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x24d0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x24d0e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d0ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24d0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24d0f0: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x24D0F0u;
    SET_GPR_U32(ctx, 31, 0x24D0F8u);
    ctx->pc = 0x24D0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D0F0u;
    // 0x24d0f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x24D0F0u, 0x24D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0F8u;
label_24d0f8:
    // 0x24d0f8: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D0F8u;
    {
        const bool branch_taken_0x24d0f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d0f8) {
            ctx->pc = 0x24D0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D0F8u;
            // 0x24d0fc: 0x2a620400  slti        $v0, $s3, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D110u;
            goto label_24d110;
        }
    }
    ctx->pc = 0x24D100u;
    // 0x24d100: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24d100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24d104: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x24D104u;
    {
        const bool branch_taken_0x24d104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D104u;
        // 0x24d108: 0x2484e210  addiu       $a0, $a0, -0x1DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d104) {
            ctx->pc = 0x24D198u;
            goto label_24d198;
        }
    }
    ctx->pc = 0x24D10Cu;
    // 0x24d10c: 0x0  nop
    ctx->pc = 0x24d10cu;
    // NOP
label_24d110:
    // 0x24d110: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D110u;
    {
        const bool branch_taken_0x24d110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d110) {
            ctx->pc = 0x24D114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D110u;
            // 0x24d114: 0x32420003  andi        $v0, $s2, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D128u;
            goto label_24d128;
        }
    }
    ctx->pc = 0x24D118u;
    // 0x24d118: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24d118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24d11c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x24D11Cu;
    {
        const bool branch_taken_0x24d11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D11Cu;
        // 0x24d120: 0x2484e238  addiu       $a0, $a0, -0x1DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d11c) {
            ctx->pc = 0x24D198u;
            goto label_24d198;
        }
    }
    ctx->pc = 0x24D124u;
    // 0x24d124: 0x0  nop
    ctx->pc = 0x24d124u;
    // NOP
label_24d128:
    // 0x24d128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D128u;
    {
        const bool branch_taken_0x24d128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D128u;
        // 0x24d12c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d128) {
            ctx->pc = 0x24D138u;
            goto label_24d138;
        }
    }
    ctx->pc = 0x24D130u;
    // 0x24d130: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x24d130u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x24d134: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x24d134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_24d138:
    // 0x24d138: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x24d138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d13c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24d13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d144: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x24d144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x24d148: 0xc049590  jal         func_125640
    ctx->pc = 0x24D148u;
    SET_GPR_U32(ctx, 31, 0x24D150u);
    ctx->pc = 0x24D14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D148u;
    // 0x24d14c: 0x2630002c  addiu       $s0, $s1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24D148u, 0x24D150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D150u;
label_24d150:
    // 0x24d150: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x24d150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x24d154: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x24d154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x24d158: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D158u;
    {
        const bool branch_taken_0x24d158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D158u;
        // 0x24d15c: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d158) {
            ctx->pc = 0x24D168u;
            goto label_24d168;
        }
    }
    ctx->pc = 0x24D160u;
    // 0x24d160: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x24d160u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24d164: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x24d164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_24d168:
    // 0x24d168: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x24d168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24d16c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x24d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x24d170: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x24d170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x24d174: 0xc093490  jal         func_24D240
    ctx->pc = 0x24D174u;
    SET_GPR_U32(ctx, 31, 0x24D17Cu);
    ctx->pc = 0x24D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D174u;
    // 0x24d178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D240u, 0x24D174u, 0x24D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D17Cu;
label_24d17c:
    // 0x24d17c: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x24d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x24d180: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x24d180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x24d184: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x24d184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24d188: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D188u;
    {
        const bool branch_taken_0x24d188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d188) {
            ctx->pc = 0x24D18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D188u;
            // 0x24d18c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D1A4u;
            goto label_24d1a4;
        }
    }
    ctx->pc = 0x24D190u;
    // 0x24d190: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24d190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24d194: 0x2484e260  addiu       $a0, $a0, -0x1DA0
    ctx->pc = 0x24d194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959712));
label_24d198:
    // 0x24d198: 0xc0933e4  jal         func_24CF90
    ctx->pc = 0x24D198u;
    SET_GPR_U32(ctx, 31, 0x24D1A0u);
    ctx->pc = 0x24CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF90u, 0x24D198u, 0x24D1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1A0u;
label_24d1a0:
    // 0x24d1a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d1a4:
    // 0x24d1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d1a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d1a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d1ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d1acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d1b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24d1b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d1b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24d1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x24D1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1B8u;
        // 0x24d1bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D1C0u;
}
