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

// Function: sub_0021D0D8
// Address: 0x21d0d8 - 0x21d1cc
void sub_0021D0D8_0x21d0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D0D8_0x21d0d8");
#endif

    switch (ctx->pc) {
        case 0x21d124u: goto label_21d124;
        case 0x21d148u: goto label_21d148;
        case 0x21d1a0u: goto label_21d1a0;
        case 0x21d1b4u: goto label_21d1b4;
        default: break;
    }

    ctx->pc = 0x21d0d8u;

    // 0x21d0d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d0dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21d0e0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21d0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21d0e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d0e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d0e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21d0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21d0ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d0f0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x21d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x21d0f4: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21D0F4u;
    {
        const bool branch_taken_0x21d0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0F4u;
        // 0x21d0f8: 0x26250950  addiu       $a1, $s1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0f4) {
            ctx->pc = 0x21D12Cu;
            goto label_21d12c;
        }
    }
    ctx->pc = 0x21D0FCu;
    // 0x21d0fc: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x21d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x21d100: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d104: 0x1043002c  beq         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x21D104u;
    {
        const bool branch_taken_0x21d104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D104u;
        // 0x21d108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d104) {
            ctx->pc = 0x21D1B8u;
            goto label_21d1b8;
        }
    }
    ctx->pc = 0x21D10Cu;
    // 0x21d10c: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x21d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x21d110: 0x50430029  beql        $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x21D110u;
    {
        const bool branch_taken_0x21d110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x21d110) {
            ctx->pc = 0x21D114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D110u;
            // 0x21d114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D1B8u;
            goto label_21d1b8;
        }
    }
    ctx->pc = 0x21D118u;
    // 0x21d118: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21d118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d11c: 0xc0881d8  jal         func_220760
    ctx->pc = 0x21D11Cu;
    SET_GPR_U32(ctx, 31, 0x21D124u);
    ctx->pc = 0x21D120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D11Cu;
    // 0x21d120: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220760u, 0x21D11Cu, 0x21D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D124u;
label_21d124:
    // 0x21d124: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D124u;
    {
        const bool branch_taken_0x21d124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D124u;
        // 0x21d128: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d124) {
            ctx->pc = 0x21D138u;
            goto label_21d138;
        }
    }
    ctx->pc = 0x21D12Cu;
label_21d12c:
    // 0x21d12c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x21D12Cu;
    {
        const bool branch_taken_0x21d12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D12Cu;
        // 0x21d130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d12c) {
            ctx->pc = 0x21D1B8u;
            goto label_21d1b8;
        }
    }
    ctx->pc = 0x21D134u;
    // 0x21d134: 0x0  nop
    ctx->pc = 0x21d134u;
    // NOP
label_21d138:
    // 0x21d138: 0x460001f  bltz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x21D138u;
    {
        const bool branch_taken_0x21d138 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x21D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D138u;
        // 0x21d13c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d138) {
            ctx->pc = 0x21D1B8u;
            goto label_21d1b8;
        }
    }
    ctx->pc = 0x21D140u;
    // 0x21d140: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21D140u;
    SET_GPR_U32(ctx, 31, 0x21D148u);
    ctx->pc = 0x21D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D140u;
    // 0x21d144: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21D140u, 0x21D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D148u;
label_21d148:
    // 0x21d148: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21d148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d14c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21d150: 0x56020014  bnel        $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21D150u;
    {
        const bool branch_taken_0x21d150 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x21d150) {
            ctx->pc = 0x21D154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D150u;
            // 0x21d154: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D1A4u;
            goto label_21d1a4;
        }
    }
    ctx->pc = 0x21D158u;
    // 0x21d158: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21d158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x21d15c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x21d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x21d160: 0x8c46a180  lw          $a2, -0x5E80($v0)
    ctx->pc = 0x21d160u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BA180u));
    // 0x21d164: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21d164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21d168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d16c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x21d16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x21d170: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x21d170u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21d174: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21D174u;
    {
        const bool branch_taken_0x21d174 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d174) {
            ctx->pc = 0x21D178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D174u;
            // 0x21d178: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D17Cu;
            goto label_21d17c;
        }
    }
    ctx->pc = 0x21D17Cu;
label_21d17c:
    // 0x21d17c: 0x1812  mflo        $v1
    ctx->pc = 0x21d17cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x21d180: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x21d180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21d184: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21d184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d188: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21d188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21d18c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d190: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21d190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21d194: 0x2450fc18  addiu       $s0, $v0, -0x3E8
    ctx->pc = 0x21d194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966296));
    // 0x21d198: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x21D198u;
    SET_GPR_U32(ctx, 31, 0x21D1A0u);
    ctx->pc = 0x21D19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D198u;
    // 0x21d19c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x21D198u, 0x21D1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D1A0u;
label_21d1a0:
    // 0x21d1a0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21d1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21d1a4:
    // 0x21d1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d1a8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x21d1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21d1ac: 0xc088326  jal         func_220C98
    ctx->pc = 0x21D1ACu;
    SET_GPR_U32(ctx, 31, 0x21D1B4u);
    ctx->pc = 0x21D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D1ACu;
    // 0x21d1b0: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220C98u, 0x21D1ACu, 0x21D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D1B4u;
label_21d1b4:
    // 0x21d1b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21d1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21d1b8:
    // 0x21d1b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21d1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d1bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21d1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d1c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21d1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x21D1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1C4u;
        // 0x21d1c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D1CCu;
}
