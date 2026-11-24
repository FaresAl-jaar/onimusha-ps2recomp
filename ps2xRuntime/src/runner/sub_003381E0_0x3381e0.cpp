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

// Function: sub_003381E0
// Address: 0x3381e0 - 0x3382f8
void sub_003381E0_0x3381e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003381E0_0x3381e0");
#endif

    switch (ctx->pc) {
        case 0x338218u: goto label_338218;
        case 0x338224u: goto label_338224;
        default: break;
    }

    ctx->pc = 0x3381e0u;

    // 0x3381e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3381e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3381e4: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x3381e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3381e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3381e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3381ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3381ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3381f0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3381f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3381f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3381f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3381f8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3381f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3381fc: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3381FCu;
    {
        const bool branch_taken_0x3381fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x338200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381FCu;
        // 0x338200: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381fc) {
            ctx->pc = 0x3382E8u;
            goto label_3382e8;
        }
    }
    ctx->pc = 0x338204u;
    // 0x338204: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x338204u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x338208: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x338208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33820c: 0x2484b7f0  addiu       $a0, $a0, -0x4810
    ctx->pc = 0x33820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    // 0x338210: 0xc0ba42c  jal         func_2E90B0
    ctx->pc = 0x338210u;
    SET_GPR_U32(ctx, 31, 0x338218u);
    ctx->pc = 0x338214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338210u;
    // 0x338214: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E90B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E90B0u, 0x338210u, 0x338218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338218u;
label_338218:
    // 0x338218: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x338218u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33821c: 0xc0ce208  jal         func_338820
    ctx->pc = 0x33821Cu;
    SET_GPR_U32(ctx, 31, 0x338224u);
    ctx->pc = 0x338220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33821Cu;
    // 0x338220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338820u, 0x33821Cu, 0x338224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338224u;
label_338224:
    // 0x338224: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x338224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x338228: 0x2cc10002  sltiu       $at, $a2, 0x2
    ctx->pc = 0x338228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x33822c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x33822Cu;
    {
        const bool branch_taken_0x33822c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x338230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33822Cu;
        // 0x338230: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33822c) {
            ctx->pc = 0x338240u;
            goto label_338240;
        }
    }
    ctx->pc = 0x338234u;
    // 0x338234: 0x14c3002c  bne         $a2, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x338234u;
    {
        const bool branch_taken_0x338234 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x338234) {
            ctx->pc = 0x3382E8u;
            goto label_3382e8;
        }
    }
    ctx->pc = 0x33823Cu;
    // 0x33823c: 0x0  nop
    ctx->pc = 0x33823cu;
    // NOP
label_338240:
    // 0x338240: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x338240u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x338244: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x338244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x338248: 0x90640e0e  lbu         $a0, 0xE0E($v1)
    ctx->pc = 0x338248u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3598)));
    // 0x33824c: 0x24650e7a  addiu       $a1, $v1, 0xE7A
    ctx->pc = 0x33824cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3706));
    // 0x338250: 0x90630e7a  lbu         $v1, 0xE7A($v1)
    ctx->pc = 0x338250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3706)));
    // 0x338254: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x338254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x338258: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x338258u;
    {
        const bool branch_taken_0x338258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x338258) {
            ctx->pc = 0x338268u;
            goto label_338268;
        }
    }
    ctx->pc = 0x338260u;
    // 0x338260: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x338260u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x338264: 0x0  nop
    ctx->pc = 0x338264u;
    // NOP
label_338268:
    // 0x338268: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x338268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33826c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x33826cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x338270: 0x90630ee6  lbu         $v1, 0xEE6($v1)
    ctx->pc = 0x338270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3814)));
    // 0x338274: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x338274u;
    {
        const bool branch_taken_0x338274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338274) {
            ctx->pc = 0x338288u;
            goto label_338288;
        }
    }
    ctx->pc = 0x33827Cu;
    // 0x33827c: 0x92030dce  lbu         $v1, 0xDCE($s0)
    ctx->pc = 0x33827cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3534)));
    // 0x338280: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x338280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x338284: 0xa2030dce  sb          $v1, 0xDCE($s0)
    ctx->pc = 0x338284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3534), (uint8_t)GPR_U32(ctx, 3));
label_338288:
    // 0x338288: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x338288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x33828c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x33828cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x338290: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x338290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x338294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x338294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338298: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x338298u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33829c: 0xa33804  sllv        $a3, $v1, $a1
    ctx->pc = 0x33829cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x3382a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3382a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3382a4: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x3382a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x3382a8: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x3382a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3382ac: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x3382acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3382b0: 0x90c40ee6  lbu         $a0, 0xEE6($a2)
    ctx->pc = 0x3382b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3814)));
    // 0x3382b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3382b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3382b8: 0xa0c40ee6  sb          $a0, 0xEE6($a2)
    ctx->pc = 0x3382b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3814), (uint8_t)GPR_U32(ctx, 4));
    // 0x3382bc: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x3382bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3382c0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x3382c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3382c4: 0x24850ee6  addiu       $a1, $a0, 0xEE6
    ctx->pc = 0x3382c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3814));
    // 0x3382c8: 0x90840ee6  lbu         $a0, 0xEE6($a0)
    ctx->pc = 0x3382c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3814)));
    // 0x3382cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3382ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3382d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3382D0u;
    {
        const bool branch_taken_0x3382d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3382D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382D0u;
        // 0x3382d4: 0x38e300ff  xori        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3382d0) {
            ctx->pc = 0x3382E8u;
            goto label_3382e8;
        }
    }
    ctx->pc = 0x3382D8u;
    // 0x3382d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3382d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3382dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3382dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3382e0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3382e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3382e4: 0x0  nop
    ctx->pc = 0x3382e4u;
    // NOP
label_3382e8:
    // 0x3382e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3382e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3382ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3382ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3382f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3382F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3382F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382F0u;
        // 0x3382f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3382F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3382F8u;
}
