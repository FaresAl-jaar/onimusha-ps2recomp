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

// Function: sub_003AD5E0
// Address: 0x3ad5e0 - 0x3ad708
void sub_003AD5E0_0x3ad5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD5E0_0x3ad5e0");
#endif

    switch (ctx->pc) {
        case 0x3ad610u: goto label_3ad610;
        case 0x3ad688u: goto label_3ad688;
        case 0x3ad6a0u: goto label_3ad6a0;
        case 0x3ad6f4u: goto label_3ad6f4;
        default: break;
    }

    ctx->pc = 0x3ad5e0u;

    // 0x3ad5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ad5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ad5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ad5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ad5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ad5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ad5ec: 0x9083004e  lbu         $v1, 0x4E($a0)
    ctx->pc = 0x3ad5ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x3ad5f0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3AD5F0u;
    {
        const bool branch_taken_0x3ad5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5F0u;
        // 0x3ad5f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5f0) {
            ctx->pc = 0x3AD690u;
            goto label_3ad690;
        }
    }
    ctx->pc = 0x3AD5F8u;
    // 0x3ad5f8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x3ad5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3ad5fc: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x3AD5FCu;
    {
        const bool branch_taken_0x3ad5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5FCu;
        // 0x3ad600: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5fc) {
            ctx->pc = 0x3AD6F8u;
            goto label_3ad6f8;
        }
    }
    ctx->pc = 0x3AD604u;
    // 0x3ad604: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3ad604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3ad608: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3AD608u;
    SET_GPR_U32(ctx, 31, 0x3AD610u);
    ctx->pc = 0x3AD60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD608u;
    // 0x3ad60c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3AD608u, 0x3AD610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD610u;
label_3ad610:
    // 0x3ad610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ad610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad614: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x3AD614u;
    {
        const bool branch_taken_0x3ad614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD614u;
        // 0x3ad618: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad614) {
            ctx->pc = 0x3AD6F8u;
            goto label_3ad6f8;
        }
    }
    ctx->pc = 0x3AD61Cu;
    // 0x3ad61c: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x3ad61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x3ad620: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3ad620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3ad624: 0x34420116  ori         $v0, $v0, 0x116
    ctx->pc = 0x3ad624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)278);
    // 0x3ad628: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3ad628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3ad62c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ad62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ad630: 0x8e0b0048  lw          $t3, 0x48($s0)
    ctx->pc = 0x3ad630u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3ad634: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3ad634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3ad638: 0x344a8080  ori         $t2, $v0, 0x8080
    ctx->pc = 0x3ad638u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3ad63c: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x3ad63cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x3ad640: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x3ad640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
    // 0x3ad644: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x3ad644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x3ad648: 0x34497180  ori         $t1, $v0, 0x7180
    ctx->pc = 0x3ad648u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29056);
    // 0x3ad64c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3ad64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3ad650: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x3ad650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
    // 0x3ad654: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ad654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad658: 0x34470c80  ori         $a3, $v0, 0xC80
    ctx->pc = 0x3ad658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3200);
    // 0x3ad65c: 0xacab0010  sw          $t3, 0x10($a1)
    ctx->pc = 0x3ad65cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 11));
    // 0x3ad660: 0x34420f00  ori         $v0, $v0, 0xF00
    ctx->pc = 0x3ad660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x3ad664: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x3ad664u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ad668: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x3ad668u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ad66c: 0xacaa0008  sw          $t2, 0x8($a1)
    ctx->pc = 0x3ad66cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 10));
    // 0x3ad670: 0xaca90020  sw          $t1, 0x20($a1)
    ctx->pc = 0x3ad670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 9));
    // 0x3ad674: 0xaca80024  sw          $t0, 0x24($a1)
    ctx->pc = 0x3ad674u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 8));
    // 0x3ad678: 0xaca70028  sw          $a3, 0x28($a1)
    ctx->pc = 0x3ad678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 7));
    // 0x3ad67c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x3ad67cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x3ad680: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3AD680u;
    SET_GPR_U32(ctx, 31, 0x3AD688u);
    ctx->pc = 0x3AD684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD680u;
    // 0x3ad684: 0xaca2001c  sw          $v0, 0x1C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3AD680u, 0x3AD688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD688u;
label_3ad688:
    // 0x3ad688: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3AD688u;
    {
        const bool branch_taken_0x3ad688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad688) {
            ctx->pc = 0x3AD6F8u;
            goto label_3ad6f8;
        }
    }
    ctx->pc = 0x3AD690u;
label_3ad690:
    // 0x3ad690: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3ad690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3ad694: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3ad694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3ad698: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3AD698u;
    SET_GPR_U32(ctx, 31, 0x3AD6A0u);
    ctx->pc = 0x3AD69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD698u;
    // 0x3ad69c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3AD698u, 0x3AD6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD6A0u;
label_3ad6a0:
    // 0x3ad6a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ad6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad6a4: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AD6A4u;
    {
        const bool branch_taken_0x3ad6a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6A4u;
        // 0x3ad6a8: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6a4) {
            ctx->pc = 0x3AD6F8u;
            goto label_3ad6f8;
        }
    }
    ctx->pc = 0x3AD6ACu;
    // 0x3ad6ac: 0x3c021418  lui         $v0, 0x1418
    ctx->pc = 0x3ad6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5144 << 16));
    // 0x3ad6b0: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x3ad6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x3ad6b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3ad6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3ad6b8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3ad6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3ad6bc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ad6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ad6c0: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x3ad6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
    // 0x3ad6c4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3ad6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3ad6c8: 0x34427180  ori         $v0, $v0, 0x7180
    ctx->pc = 0x3ad6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29056);
    // 0x3ad6cc: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x3ad6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x3ad6d0: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x3ad6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x3ad6d4: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3ad6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3ad6d8: 0x3c028300  lui         $v0, 0x8300
    ctx->pc = 0x3ad6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33536 << 16));
    // 0x3ad6dc: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x3ad6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x3ad6e0: 0x34427e00  ori         $v0, $v0, 0x7E00
    ctx->pc = 0x3ad6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32256);
    // 0x3ad6e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ad6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad6e8: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x3ad6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x3ad6ec: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3AD6ECu;
    SET_GPR_U32(ctx, 31, 0x3AD6F4u);
    ctx->pc = 0x3AD6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD6ECu;
    // 0x3ad6f0: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3AD6ECu, 0x3AD6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD6F4u;
label_3ad6f4:
    // 0x3ad6f4: 0x0  nop
    ctx->pc = 0x3ad6f4u;
    // NOP
label_3ad6f8:
    // 0x3ad6f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ad6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ad6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad700: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD700u;
        // 0x3ad704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD708u;
}
