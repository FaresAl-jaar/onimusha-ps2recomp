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

// Function: sub_0024AAB8
// Address: 0x24aab8 - 0x24ac70
void sub_0024AAB8_0x24aab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AAB8_0x24aab8");
#endif

    switch (ctx->pc) {
        case 0x24ab08u: goto label_24ab08;
        case 0x24ab28u: goto label_24ab28;
        case 0x24ab54u: goto label_24ab54;
        case 0x24ab68u: goto label_24ab68;
        case 0x24ab74u: goto label_24ab74;
        case 0x24ab80u: goto label_24ab80;
        case 0x24ab9cu: goto label_24ab9c;
        case 0x24abb4u: goto label_24abb4;
        case 0x24abd0u: goto label_24abd0;
        case 0x24abd8u: goto label_24abd8;
        case 0x24abe0u: goto label_24abe0;
        case 0x24abe8u: goto label_24abe8;
        case 0x24abf0u: goto label_24abf0;
        case 0x24ac00u: goto label_24ac00;
        case 0x24ac08u: goto label_24ac08;
        case 0x24ac24u: goto label_24ac24;
        case 0x24ac3cu: goto label_24ac3c;
        default: break;
    }

    ctx->pc = 0x24aab8u;

    // 0x24aab8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x24aab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x24aabc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x24aabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24aac0: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x24aac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x24aac4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x24aac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aac8: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x24aac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x24aacc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24aaccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24aad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aad4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24aad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aad8: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x24aad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x24aadc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24aadcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aae0: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x24aae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x24aae4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x24aae4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aae8: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x24aae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x24aaec: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x24aaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x24aaf0: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x24aaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x24aaf4: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x24aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x24aaf8: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x24aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x24aafc: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x24aafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x24ab00: 0xc049590  jal         func_125640
    ctx->pc = 0x24AB00u;
    SET_GPR_U32(ctx, 31, 0x24AB08u);
    ctx->pc = 0x24AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB00u;
    // 0x24ab04: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24AB00u, 0x24AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB08u;
label_24ab08:
    // 0x24ab08: 0x2a83000e  slti        $v1, $s4, 0xE
    ctx->pc = 0x24ab08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x24ab0c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x24ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x24ab10: 0x43a00a  movz        $s4, $v0, $v1
    ctx->pc = 0x24ab10u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x24ab14: 0x5a800040  blezl       $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x24AB14u;
    {
        const bool branch_taken_0x24ab14 = (GPR_S64(ctx, 20) <= 0);
        if (branch_taken_0x24ab14) {
            ctx->pc = 0x24AB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AB14u;
            // 0x24ab18: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AC18u;
            goto label_24ac18;
        }
    }
    ctx->pc = 0x24AB1Cu;
    // 0x24ab1c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24ab20: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x24ab20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab24: 0x24571100  addiu       $s7, $v0, 0x1100
    ctx->pc = 0x24ab24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
label_24ab28:
    // 0x24ab28: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x24ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x24ab2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24ab2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab30: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x24ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x24ab34: 0x732018  mult        $a0, $v1, $s3
    ctx->pc = 0x24ab34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24ab38: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x24ab3c: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x24ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x24ab40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24ab40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x24ab44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24ab48: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x24ab48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x24ab4c: 0xc092966  jal         func_24A598
    ctx->pc = 0x24AB4Cu;
    SET_GPR_U32(ctx, 31, 0x24AB54u);
    ctx->pc = 0x24AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB4Cu;
    // 0x24ab50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A598u, 0x24AB4Cu, 0x24AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB54u;
label_24ab54:
    // 0x24ab54: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x24ab54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24ab58: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x24AB58u;
    {
        const bool branch_taken_0x24ab58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB58u;
        // 0x24ab5c: 0x24046600  addiu       $a0, $zero, 0x6600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab58) {
            ctx->pc = 0x24AC08u;
            goto label_24ac08;
        }
    }
    ctx->pc = 0x24AB60u;
    // 0x24ab60: 0xc091a44  jal         func_246910
    ctx->pc = 0x24AB60u;
    SET_GPR_U32(ctx, 31, 0x24AB68u);
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24AB60u, 0x24AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB68u;
label_24ab68:
    // 0x24ab68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ab6c: 0xc091b08  jal         func_246C20
    ctx->pc = 0x24AB6Cu;
    SET_GPR_U32(ctx, 31, 0x24AB74u);
    ctx->pc = 0x24AB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB6Cu;
    // 0x24ab70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C20u, 0x24AB6Cu, 0x24AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB74u;
label_24ab74:
    // 0x24ab74: 0x24046601  addiu       $a0, $zero, 0x6601
    ctx->pc = 0x24ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26113));
    // 0x24ab78: 0xc091a44  jal         func_246910
    ctx->pc = 0x24AB78u;
    SET_GPR_U32(ctx, 31, 0x24AB80u);
    ctx->pc = 0x24AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB78u;
    // 0x24ab7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24AB78u, 0x24AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB80u;
label_24ab80:
    // 0x24ab80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24ab80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab84: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24AB84u;
    {
        const bool branch_taken_0x24ab84 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x24AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB84u;
        // 0x24ab88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab84) {
            ctx->pc = 0x24ABA8u;
            goto label_24aba8;
        }
    }
    ctx->pc = 0x24AB8Cu;
    // 0x24ab8c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x24ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x24ab90: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x24ab90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x24ab94: 0xc08d460  jal         func_235180
    ctx->pc = 0x24AB94u;
    SET_GPR_U32(ctx, 31, 0x24AB9Cu);
    ctx->pc = 0x24AB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB94u;
    // 0x24ab98: 0x2444d588  addiu       $a0, $v0, -0x2A78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x24AB94u, 0x24AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB9Cu;
label_24ab9c:
    // 0x24ab9c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24AB9Cu;
    {
        const bool branch_taken_0x24ab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB9Cu;
        // 0x24aba0: 0x274102a  slt         $v0, $s3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab9c) {
            ctx->pc = 0x24AC0Cu;
            goto label_24ac0c;
        }
    }
    ctx->pc = 0x24ABA4u;
    // 0x24aba4: 0x0  nop
    ctx->pc = 0x24aba4u;
    // NOP
label_24aba8:
    // 0x24aba8: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x24aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x24abac: 0xc09271c  jal         func_249C70
    ctx->pc = 0x24ABACu;
    SET_GPR_U32(ctx, 31, 0x24ABB4u);
    ctx->pc = 0x24ABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABACu;
    // 0x24abb0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249C70u, 0x24ABACu, 0x24ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABB4u;
label_24abb4:
    // 0x24abb4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x24abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x24abb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24abb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24abbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x24abbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x24abc0: 0x2464d5b0  addiu       $a0, $v1, -0x2A50
    ctx->pc = 0x24abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956464));
    // 0x24abc4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x24abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x24abc8: 0xc08d460  jal         func_235180
    ctx->pc = 0x24ABC8u;
    SET_GPR_U32(ctx, 31, 0x24ABD0u);
    ctx->pc = 0x24ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABC8u;
    // 0x24abcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x24ABC8u, 0x24ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABD0u;
label_24abd0:
    // 0x24abd0: 0xc091a44  jal         func_246910
    ctx->pc = 0x24ABD0u;
    SET_GPR_U32(ctx, 31, 0x24ABD8u);
    ctx->pc = 0x24ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABD0u;
    // 0x24abd4: 0x24046800  addiu       $a0, $zero, 0x6800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24ABD0u, 0x24ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABD8u;
label_24abd8:
    // 0x24abd8: 0xc091b22  jal         func_246C88
    ctx->pc = 0x24ABD8u;
    SET_GPR_U32(ctx, 31, 0x24ABE0u);
    ctx->pc = 0x24ABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABD8u;
    // 0x24abdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C88u, 0x24ABD8u, 0x24ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABE0u;
label_24abe0:
    // 0x24abe0: 0xc091a44  jal         func_246910
    ctx->pc = 0x24ABE0u;
    SET_GPR_U32(ctx, 31, 0x24ABE8u);
    ctx->pc = 0x24ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABE0u;
    // 0x24abe4: 0x24046801  addiu       $a0, $zero, 0x6801 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24ABE0u, 0x24ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABE8u;
label_24abe8:
    // 0x24abe8: 0xc091a44  jal         func_246910
    ctx->pc = 0x24ABE8u;
    SET_GPR_U32(ctx, 31, 0x24ABF0u);
    ctx->pc = 0x24ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABE8u;
    // 0x24abec: 0x24046700  addiu       $a0, $zero, 0x6700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24ABE8u, 0x24ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABF0u;
label_24abf0:
    // 0x24abf0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24abf4: 0x8c451110  lw          $a1, 0x1110($v0)
    ctx->pc = 0x24abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4D1110u));
    // 0x24abf8: 0xc091b08  jal         func_246C20
    ctx->pc = 0x24ABF8u;
    SET_GPR_U32(ctx, 31, 0x24AC00u);
    ctx->pc = 0x24ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABF8u;
    // 0x24abfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C20u, 0x24ABF8u, 0x24AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC00u;
label_24ac00:
    // 0x24ac00: 0xc091a44  jal         func_246910
    ctx->pc = 0x24AC00u;
    SET_GPR_U32(ctx, 31, 0x24AC08u);
    ctx->pc = 0x24AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AC00u;
    // 0x24ac04: 0x24046701  addiu       $a0, $zero, 0x6701 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26369));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24AC00u, 0x24AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC08u;
label_24ac08:
    // 0x24ac08: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x24ac08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_24ac0c:
    // 0x24ac0c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x24AC0Cu;
    {
        const bool branch_taken_0x24ac0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC0Cu;
        // 0x24ac10: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac0c) {
            ctx->pc = 0x24AB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ab28;
        }
    }
    ctx->pc = 0x24AC14u;
    // 0x24ac14: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24ac18:
    // 0x24ac18: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24ac18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac1c: 0xc08d460  jal         func_235180
    ctx->pc = 0x24AC1Cu;
    SET_GPR_U32(ctx, 31, 0x24AC24u);
    ctx->pc = 0x24AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AC1Cu;
    // 0x24ac20: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x24AC1Cu, 0x24AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC24u;
label_24ac24:
    // 0x24ac24: 0x1bc00006  blez        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x24AC24u;
    {
        const bool branch_taken_0x24ac24 = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x24AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC24u;
        // 0x24ac28: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac24) {
            ctx->pc = 0x24AC40u;
            goto label_24ac40;
        }
    }
    ctx->pc = 0x24AC2Cu;
    // 0x24ac2c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24ac30: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x24ac30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24ac34: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24AC34u;
    SET_GPR_U32(ctx, 31, 0x24AC3Cu);
    ctx->pc = 0x24AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AC34u;
    // 0x24ac38: 0x2484d5e8  addiu       $a0, $a0, -0x2A18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24AC34u, 0x24AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC3Cu;
label_24ac3c:
    // 0x24ac3c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x24ac3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24ac40:
    // 0x24ac40: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x24ac40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24ac44: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x24ac44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x24ac48: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x24ac48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24ac4c: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x24ac4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x24ac50: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x24ac50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24ac54: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x24ac54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x24ac58: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x24ac58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24ac5c: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x24ac5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x24ac60: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x24ac60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24ac64: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x24ac64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x24ac68: 0x3e00008  jr          $ra
    ctx->pc = 0x24AC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC68u;
        // 0x24ac6c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AC70u;
}
