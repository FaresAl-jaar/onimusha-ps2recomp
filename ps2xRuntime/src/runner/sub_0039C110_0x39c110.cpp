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

// Function: sub_0039C110
// Address: 0x39c110 - 0x39c23c
void sub_0039C110_0x39c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C110_0x39c110");
#endif

    switch (ctx->pc) {
        case 0x39c130u: goto label_39c130;
        case 0x39c1c8u: goto label_39c1c8;
        default: break;
    }

    ctx->pc = 0x39c110u;

    // 0x39c110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39c114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39c118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39c11c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39c120: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x39c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x39c124: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x39c124u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39c128: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x39C128u;
    SET_GPR_U32(ctx, 31, 0x39C130u);
    ctx->pc = 0x39C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C128u;
    // 0x39c12c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x39C128u, 0x39C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C130u;
label_39c130:
    // 0x39c130: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x39c130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x39c134: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x39c134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x39c138: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x39c138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39c13c: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x39c13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x39c140: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x39c140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x39c144: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x39c144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x39c148: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x39c148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x39c14c: 0x0  nop
    ctx->pc = 0x39c14cu;
    // NOP
    // 0x39c150: 0x0  nop
    ctx->pc = 0x39c150u;
    // NOP
    // 0x39c154: 0x1810  mfhi        $v1
    ctx->pc = 0x39c154u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x39c158: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x39c158u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x39c15c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x39c15cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x39c160: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39c160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39c164: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x39c164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39c168: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x39C168u;
    {
        const bool branch_taken_0x39c168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c168) {
            ctx->pc = 0x39C1B8u;
            goto label_39c1b8;
        }
    }
    ctx->pc = 0x39C170u;
    // 0x39c170: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x39c170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x39c174: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x39c174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x39c178: 0x34650dcd  ori         $a1, $v1, 0xDCD
    ctx->pc = 0x39c178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x39c17c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x39c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x39c180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39c180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c184: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x39c184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39c188: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x39c188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x39c18c: 0xaf8580e0  sw          $a1, -0x7F20($gp)
    ctx->pc = 0x39c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 5));
    // 0x39c190: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x39c190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x39c194: 0x52b02  srl         $a1, $a1, 12
    ctx->pc = 0x39c194u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x39c198: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x39c198u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x39c19c: 0x0  nop
    ctx->pc = 0x39c19cu;
    // NOP
    // 0x39c1a0: 0x0  nop
    ctx->pc = 0x39c1a0u;
    // NOP
    // 0x39c1a4: 0x2010  mfhi        $a0
    ctx->pc = 0x39c1a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x39c1a8: 0xa6242bd0  sh          $a0, 0x2BD0($s1)
    ctx->pc = 0x39c1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11216), (uint16_t)GPR_U32(ctx, 4));
    // 0x39c1ac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x39C1ACu;
    {
        const bool branch_taken_0x39c1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1ACu;
        // 0x39c1b0: 0xa6232bd4  sh          $v1, 0x2BD4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11220), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c1ac) {
            ctx->pc = 0x39C228u;
            goto label_39c228;
        }
    }
    ctx->pc = 0x39C1B4u;
    // 0x39c1b4: 0x0  nop
    ctx->pc = 0x39c1b4u;
    // NOP
label_39c1b8:
    // 0x39c1b8: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x39c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x39c1bc: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x39c1bcu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39c1c0: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x39C1C0u;
    SET_GPR_U32(ctx, 31, 0x39C1C8u);
    ctx->pc = 0x39C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C1C0u;
    // 0x39c1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x39C1C0u, 0x39C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C1C8u;
label_39c1c8:
    // 0x39c1c8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x39c1c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x39c1cc: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x39c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x39c1d0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x39c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39c1d4: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x39c1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x39c1d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x39c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x39c1dc: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x39c1dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x39c1e0: 0x0  nop
    ctx->pc = 0x39c1e0u;
    // NOP
    // 0x39c1e4: 0x0  nop
    ctx->pc = 0x39c1e4u;
    // NOP
    // 0x39c1e8: 0x1810  mfhi        $v1
    ctx->pc = 0x39c1e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x39c1ec: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x39c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x39c1f0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x39c1f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x39c1f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39c1f8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x39c1f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39c1fc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39C1FCu;
    {
        const bool branch_taken_0x39c1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1FCu;
        // 0x39c200: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c1fc) {
            ctx->pc = 0x39C218u;
            goto label_39c218;
        }
    }
    ctx->pc = 0x39C204u;
    // 0x39c204: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39c204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39c208: 0xa6242bd0  sh          $a0, 0x2BD0($s1)
    ctx->pc = 0x39c208u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11216), (uint16_t)GPR_U32(ctx, 4));
    // 0x39c20c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39C20Cu;
    {
        const bool branch_taken_0x39c20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C20Cu;
        // 0x39c210: 0xa6232bd4  sh          $v1, 0x2BD4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11220), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c20c) {
            ctx->pc = 0x39C228u;
            goto label_39c228;
        }
    }
    ctx->pc = 0x39C214u;
    // 0x39c214: 0x0  nop
    ctx->pc = 0x39c214u;
    // NOP
label_39c218:
    // 0x39c218: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x39c218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x39c21c: 0xa6232bd0  sh          $v1, 0x2BD0($s1)
    ctx->pc = 0x39c21cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11216), (uint16_t)GPR_U32(ctx, 3));
    // 0x39c220: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x39c220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x39c224: 0xa6232bd4  sh          $v1, 0x2BD4($s1)
    ctx->pc = 0x39c224u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11220), (uint16_t)GPR_U32(ctx, 3));
label_39c228:
    // 0x39c228: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c22c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c230: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c234: 0x3e00008  jr          $ra
    ctx->pc = 0x39C234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C234u;
        // 0x39c238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C23Cu;
}
