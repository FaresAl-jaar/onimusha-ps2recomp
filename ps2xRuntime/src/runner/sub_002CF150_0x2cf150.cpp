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

// Function: sub_002CF150
// Address: 0x2cf150 - 0x2cf238
void sub_002CF150_0x2cf150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF150_0x2cf150");
#endif

    switch (ctx->pc) {
        case 0x2cf164u: goto label_2cf164;
        case 0x2cf190u: goto label_2cf190;
        default: break;
    }

    ctx->pc = 0x2cf150u;

    // 0x2cf150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cf15c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x2CF15Cu;
    SET_GPR_U32(ctx, 31, 0x2CF164u);
    ctx->pc = 0x2CF160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF15Cu;
    // 0x2cf160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x2CF15Cu, 0x2CF164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF164u;
label_2cf164:
    // 0x2cf164: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2cf164u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2cf168: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x2cf168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2cf16c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF16Cu;
    {
        const bool branch_taken_0x2cf16c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cf16c) {
            ctx->pc = 0x2CF180u;
            goto label_2cf180;
        }
    }
    ctx->pc = 0x2CF174u;
    // 0x2cf174: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF174u;
    {
        const bool branch_taken_0x2cf174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF174u;
        // 0x2cf178: 0xa2002b68  sb          $zero, 0x2B68($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11112), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf174) {
            ctx->pc = 0x2CF188u;
            goto label_2cf188;
        }
    }
    ctx->pc = 0x2CF17Cu;
    // 0x2cf17c: 0x0  nop
    ctx->pc = 0x2cf17cu;
    // NOP
label_2cf180:
    // 0x2cf180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf184: 0xa2032b68  sb          $v1, 0x2B68($s0)
    ctx->pc = 0x2cf184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11112), (uint8_t)GPR_U32(ctx, 3));
label_2cf188:
    // 0x2cf188: 0xa20029d1  sb          $zero, 0x29D1($s0)
    ctx->pc = 0x2cf188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf18c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf190:
    // 0x2cf190: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2cf190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2cf194: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2cf194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2cf198: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2cf198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cf19c: 0xa0802b5c  sb          $zero, 0x2B5C($a0)
    ctx->pc = 0x2cf19cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf1a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cf1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cf1a4: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2cf1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2cf1a8: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x2cf1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2cf1ac: 0xa0802b5c  sb          $zero, 0x2B5C($a0)
    ctx->pc = 0x2cf1acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf1b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cf1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cf1b4: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2cf1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2cf1b8: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x2cf1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x2cf1bc: 0xa0802b5c  sb          $zero, 0x2B5C($a0)
    ctx->pc = 0x2cf1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf1c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cf1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cf1c4: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2cf1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2cf1c8: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x2cf1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cf1cc: 0xa0802b5c  sb          $zero, 0x2B5C($a0)
    ctx->pc = 0x2cf1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf1d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cf1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cf1d4: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2cf1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2cf1d8: 0x24a30005  addiu       $v1, $a1, 0x5
    ctx->pc = 0x2cf1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x2cf1dc: 0xa0802b5c  sb          $zero, 0x2B5C($a0)
    ctx->pc = 0x2cf1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf1e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cf1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cf1e4: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2cf1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2cf1e8: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x2cf1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x2cf1ec: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2cf1ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cf1f0: 0x28a3000c  slti        $v1, $a1, 0xC
    ctx->pc = 0x2cf1f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cf1f4: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2CF1F4u;
    {
        const bool branch_taken_0x2cf1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF1F4u;
        // 0x2cf1f8: 0xa0802b5c  sb          $zero, 0x2B5C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11100), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf1f4) {
            ctx->pc = 0x2CF190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf190;
        }
    }
    ctx->pc = 0x2CF1FCu;
    // 0x2cf1fc: 0xa2002b5b  sb          $zero, 0x2B5B($s0)
    ctx->pc = 0x2cf1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11099), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf200: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2cf200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2cf204: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2cf204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2cf208: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2cf208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2cf20c: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2cf20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2cf210: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2cf210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2cf214: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2cf214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x2cf218: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2cf218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x2cf21c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2cf21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2cf220: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2cf220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf224: 0xe6002b50  swc1        $f0, 0x2B50($s0)
    ctx->pc = 0x2cf224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11088), bits); }
    // 0x2cf228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf22c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf230: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF230u;
        // 0x2cf234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF238u;
}
