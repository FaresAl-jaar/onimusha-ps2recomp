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

// Function: sub_0028A1D0
// Address: 0x28a1d0 - 0x28a2dc
void sub_0028A1D0_0x28a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A1D0_0x28a1d0");
#endif

    switch (ctx->pc) {
        case 0x28a248u: goto label_28a248;
        case 0x28a2acu: goto label_28a2ac;
        default: break;
    }

    ctx->pc = 0x28a1d0u;

    // 0x28a1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28a1d4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x28a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x28a1d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28a1dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28a1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28a1e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28a1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28a1e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28a1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1e8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x28a1e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x28a1ec: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28A1ECu;
    {
        const bool branch_taken_0x28a1ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1ECu;
        // 0x28a1f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1ec) {
            ctx->pc = 0x28A268u;
            goto label_28a268;
        }
    }
    ctx->pc = 0x28A1F4u;
    // 0x28a1f4: 0x8e08004c  lw          $t0, 0x4C($s0)
    ctx->pc = 0x28a1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x28a1f8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28a1fc: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x28a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x28a200: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x28a200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28a204: 0x24426b00  addiu       $v0, $v0, 0x6B00
    ctx->pc = 0x28a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
    // 0x28a208: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28a208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a20c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x28a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a210: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28a210u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a214: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x28a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x28a218: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28a218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a21c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x28a21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x28a220: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28a220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28a224: 0x80690000  lb          $t1, 0x0($v1)
    ctx->pc = 0x28a224u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a228: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x28a228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28a22c: 0x9106006a  lbu         $a2, 0x6A($t0)
    ctx->pc = 0x28a22cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
    // 0x28a230: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x28a230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x28a234: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x28a234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x28a238: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x28a238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x28a23c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x28a23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x28a240: 0xc0603b4  jal         func_180ED0
    ctx->pc = 0x28A240u;
    SET_GPR_U32(ctx, 31, 0x28A248u);
    ctx->pc = 0x28A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A240u;
    // 0x28a244: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180ED0u, 0x28A240u, 0x28A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A248u;
label_28a248:
    // 0x28a248: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x28a248u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28a24c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x28a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x28a250: 0x24636b00  addiu       $v1, $v1, 0x6B00
    ctx->pc = 0x28a250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27392));
    // 0x28a254: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x28a254u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x28a258: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28a258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28a25c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x28a25cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a260: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x28A260u;
    {
        const bool branch_taken_0x28a260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A260u;
        // 0x28a264: 0xa2230504  sb          $v1, 0x504($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1284), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a260) {
            ctx->pc = 0x28A2C8u;
            goto label_28a2c8;
        }
    }
    ctx->pc = 0x28A268u;
label_28a268:
    // 0x28a268: 0x8e08004c  lw          $t0, 0x4C($s0)
    ctx->pc = 0x28a268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x28a26c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28a26cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a270: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28a270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28a274: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x28a274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28a278: 0x24426b00  addiu       $v0, $v0, 0x6B00
    ctx->pc = 0x28a278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
    // 0x28a27c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28a280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a284: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28a284u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a288: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28a288u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a28c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28a28cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x28a290: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x28a290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x28a294: 0x80490000  lb          $t1, 0x0($v0)
    ctx->pc = 0x28a294u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a298: 0x9106006a  lbu         $a2, 0x6A($t0)
    ctx->pc = 0x28a298u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
    // 0x28a29c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x28a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x28a2a0: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x28a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x28a2a4: 0xc0603b4  jal         func_180ED0
    ctx->pc = 0x28A2A4u;
    SET_GPR_U32(ctx, 31, 0x28A2ACu);
    ctx->pc = 0x28A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A2A4u;
    // 0x28a2a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x180ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180ED0u, 0x28A2A4u, 0x28A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2ACu;
label_28a2ac:
    // 0x28a2ac: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x28a2acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28a2b0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x28a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x28a2b4: 0x24636b00  addiu       $v1, $v1, 0x6B00
    ctx->pc = 0x28a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27392));
    // 0x28a2b8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x28a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x28a2bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28a2c0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x28a2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a2c4: 0xa2230504  sb          $v1, 0x504($s1)
    ctx->pc = 0x28a2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1284), (uint8_t)GPR_U32(ctx, 3));
label_28a2c8:
    // 0x28a2c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28a2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a2cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28a2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a2d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28a2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x28A2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2D4u;
        // 0x28a2d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A2DCu;
}
