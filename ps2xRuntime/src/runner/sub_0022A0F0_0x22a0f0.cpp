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

// Function: sub_0022A0F0
// Address: 0x22a0f0 - 0x22a200
void sub_0022A0F0_0x22a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A0F0_0x22a0f0");
#endif

    switch (ctx->pc) {
        case 0x22a160u: goto label_22a160;
        default: break;
    }

    ctx->pc = 0x22a0f0u;

    // 0x22a0f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22a0f4: 0x28a21000  slti        $v0, $a1, 0x1000
    ctx->pc = 0x22a0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x22a0f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22a0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22a0fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a100: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22a100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22a104: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22a104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a108: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a10c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x22a10cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a110: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22a110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22a114: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x22a114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a118: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x22a118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x22a11c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x22a11cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a120: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x22a120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x22a124: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x22a124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a128: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x22a128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x22a12c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x22a12cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a130: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x22a130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x22a134: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22a134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a138: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x22a138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x22a13c: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x22a13cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x22a140: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A140u;
    {
        const bool branch_taken_0x22a140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A140u;
        // 0x22a144: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a140) {
            ctx->pc = 0x22A158u;
            goto label_22a158;
        }
    }
    ctx->pc = 0x22A148u;
    // 0x22a148: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x22a148u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x22a14c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x22A14Cu;
    {
        const bool branch_taken_0x22a14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A14Cu;
        // 0x22a150: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a14c) {
            ctx->pc = 0x22A1D8u;
            goto label_22a1d8;
        }
    }
    ctx->pc = 0x22A154u;
    // 0x22a154: 0x0  nop
    ctx->pc = 0x22a154u;
    // NOP
label_22a158:
    // 0x22a158: 0xc08a73e  jal         func_229CF8
    ctx->pc = 0x22A158u;
    SET_GPR_U32(ctx, 31, 0x22A160u);
    ctx->pc = 0x229CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229CF8u, 0x22A158u, 0x22A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A160u;
label_22a160:
    // 0x22a160: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22a160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a164: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x22A164u;
    {
        const bool branch_taken_0x22a164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A164u;
        // 0x22a168: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a164) {
            ctx->pc = 0x22A1D8u;
            goto label_22a1d8;
        }
    }
    ctx->pc = 0x22A16Cu;
    // 0x22a16c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x22a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22a170: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x22a170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x22a174: 0x18800018  blez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22A174u;
    {
        const bool branch_taken_0x22a174 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x22A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A174u;
        // 0x22a178: 0xa6230000  sh          $v1, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a174) {
            ctx->pc = 0x22A1D8u;
            goto label_22a1d8;
        }
    }
    ctx->pc = 0x22A17Cu;
    // 0x22a17c: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x22a17cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22a180: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x22a180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22a184: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x22a184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a188: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22a188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a18c: 0x93a40008  lbu         $a0, 0x8($sp)
    ctx->pc = 0x22a18cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a190: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22a190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a194: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x22a194u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x22a198: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x22a198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22a19c: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x22a19cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22a1a0: 0xa2840000  sb          $a0, 0x0($s4)
    ctx->pc = 0x22a1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22a1a4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x22a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a1a8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22a1ac: 0xa2a70000  sb          $a3, 0x0($s5)
    ctx->pc = 0x22a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x22a1b0: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x22a1b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22a1b4: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x22a1b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22a1b8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x22a1b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22a1bc: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x22a1bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22a1c0: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x22a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x22a1c4: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x22a1c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x22a1c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22a1cc: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x22a1ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x22a1d0: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x22a1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22a1d4: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x22a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_22a1d8:
    // 0x22a1d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22a1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a1dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22a1dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22a1e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a1e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a1e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22a1e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22a1e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x22a1e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a1ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x22a1ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22a1f0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x22a1f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a1f4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x22a1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22a1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x22A1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1F8u;
        // 0x22a1fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A200u;
}
