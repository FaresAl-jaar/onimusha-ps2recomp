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

// Function: sub_0024AC70
// Address: 0x24ac70 - 0x24ada0
void sub_0024AC70_0x24ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AC70_0x24ac70");
#endif

    switch (ctx->pc) {
        case 0x24acd0u: goto label_24acd0;
        case 0x24acfcu: goto label_24acfc;
        case 0x24ad10u: goto label_24ad10;
        case 0x24ad18u: goto label_24ad18;
        case 0x24ad24u: goto label_24ad24;
        case 0x24ad38u: goto label_24ad38;
        case 0x24ad48u: goto label_24ad48;
        case 0x24ad64u: goto label_24ad64;
        case 0x24ad6cu: goto label_24ad6c;
        default: break;
    }

    ctx->pc = 0x24ac70u;

    // 0x24ac70: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x24ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x24ac74: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24ac78: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x24ac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x24ac7c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x24ac7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac80: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x24ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x24ac84: 0x24431100  addiu       $v1, $v0, 0x1100
    ctx->pc = 0x24ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
    // 0x24ac88: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x24ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x24ac8c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x24ac8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x24ac90: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x24ac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x24ac94: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x24ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x24ac98: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x24ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x24ac9c: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x24ac9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x24aca0: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x24aca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x24aca4: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x24aca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x24aca8: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x24aca8u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x4D1100u));
    // 0x24acac: 0x12600030  beqz        $s3, . + 4 + (0x30 << 2)
    ctx->pc = 0x24ACACu;
    {
        const bool branch_taken_0x24acac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACACu;
        // 0x24acb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acac) {
            ctx->pc = 0x24AD70u;
            goto label_24ad70;
        }
    }
    ctx->pc = 0x24ACB4u;
    // 0x24acb4: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x24acb4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24acb8: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x24ACB8u;
    {
        const bool branch_taken_0x24acb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACB8u;
        // 0x24acbc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acb8) {
            ctx->pc = 0x24AD54u;
            goto label_24ad54;
        }
    }
    ctx->pc = 0x24ACC0u;
    // 0x24acc0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x24acc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24acc4: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x24acc4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
    // 0x24acc8: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x24acc8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
    // 0x24accc: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x24acccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24acd0:
    // 0x24acd0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x24acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x24acd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24acd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24acd8: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x24acd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24acdc: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x24acdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24ace0: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x24ace0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x24ace4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x24ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x24ace8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24ace8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24acec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24acecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24acf0: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x24acf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x24acf4: 0xc092966  jal         func_24A598
    ctx->pc = 0x24ACF4u;
    SET_GPR_U32(ctx, 31, 0x24ACFCu);
    ctx->pc = 0x24ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ACF4u;
    // 0x24acf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A598u, 0x24ACF4u, 0x24ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ACFCu;
label_24acfc:
    // 0x24acfc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x24acfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24ad00: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24AD00u;
    {
        const bool branch_taken_0x24ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD00u;
        // 0x24ad04: 0x24046900  addiu       $a0, $zero, 0x6900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad00) {
            ctx->pc = 0x24AD48u;
            goto label_24ad48;
        }
    }
    ctx->pc = 0x24AD08u;
    // 0x24ad08: 0xc091a44  jal         func_246910
    ctx->pc = 0x24AD08u;
    SET_GPR_U32(ctx, 31, 0x24AD10u);
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24AD08u, 0x24AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD10u;
label_24ad10:
    // 0x24ad10: 0xc091b22  jal         func_246C88
    ctx->pc = 0x24AD10u;
    SET_GPR_U32(ctx, 31, 0x24AD18u);
    ctx->pc = 0x24AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AD10u;
    // 0x24ad14: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C88u, 0x24AD10u, 0x24AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD18u;
label_24ad18:
    // 0x24ad18: 0x24046901  addiu       $a0, $zero, 0x6901
    ctx->pc = 0x24ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26881));
    // 0x24ad1c: 0xc091a44  jal         func_246910
    ctx->pc = 0x24AD1Cu;
    SET_GPR_U32(ctx, 31, 0x24AD24u);
    ctx->pc = 0x24AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AD1Cu;
    // 0x24ad20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24AD1Cu, 0x24AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD24u;
label_24ad24:
    // 0x24ad24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24ad24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad28: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24AD28u;
    {
        const bool branch_taken_0x24ad28 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x24AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD28u;
        // 0x24ad2c: 0x26e4d640  addiu       $a0, $s7, -0x29C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad28) {
            ctx->pc = 0x24AD40u;
            goto label_24ad40;
        }
    }
    ctx->pc = 0x24AD30u;
    // 0x24ad30: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24AD30u;
    SET_GPR_U32(ctx, 31, 0x24AD38u);
    ctx->pc = 0x24AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AD30u;
    // 0x24ad34: 0x27c4d618  addiu       $a0, $fp, -0x29E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24AD30u, 0x24AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD38u;
label_24ad38:
    // 0x24ad38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24AD38u;
    {
        const bool branch_taken_0x24ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD38u;
        // 0x24ad3c: 0x234102b  sltu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad38) {
            ctx->pc = 0x24AD4Cu;
            goto label_24ad4c;
        }
    }
    ctx->pc = 0x24AD40u;
label_24ad40:
    // 0x24ad40: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24AD40u;
    SET_GPR_U32(ctx, 31, 0x24AD48u);
    ctx->pc = 0x24AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AD40u;
    // 0x24ad44: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24AD40u, 0x24AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD48u;
label_24ad48:
    // 0x24ad48: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x24ad48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_24ad4c:
    // 0x24ad4c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x24AD4Cu;
    {
        const bool branch_taken_0x24ad4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD4Cu;
        // 0x24ad50: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad4c) {
            ctx->pc = 0x24ACD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24acd0;
        }
    }
    ctx->pc = 0x24AD54u;
label_24ad54:
    // 0x24ad54: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24ad58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24ad58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad5c: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24AD5Cu;
    SET_GPR_U32(ctx, 31, 0x24AD64u);
    ctx->pc = 0x24AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AD5Cu;
    // 0x24ad60: 0x2484d660  addiu       $a0, $a0, -0x29A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24AD5Cu, 0x24AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD64u;
label_24ad64:
    // 0x24ad64: 0xc092b9a  jal         func_24AE68
    ctx->pc = 0x24AD64u;
    SET_GPR_U32(ctx, 31, 0x24AD6Cu);
    ctx->pc = 0x24AE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AE68u, 0x24AD64u, 0x24AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD6Cu;
label_24ad6c:
    // 0x24ad6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ad70:
    // 0x24ad70: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x24ad70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24ad74: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x24ad74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x24ad78: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x24ad78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24ad7c: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x24ad7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x24ad80: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x24ad80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24ad84: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x24ad84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x24ad88: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x24ad88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24ad8c: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x24ad8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x24ad90: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x24ad90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24ad94: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x24ad94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x24ad98: 0x3e00008  jr          $ra
    ctx->pc = 0x24AD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD98u;
        // 0x24ad9c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ADA0u;
}
