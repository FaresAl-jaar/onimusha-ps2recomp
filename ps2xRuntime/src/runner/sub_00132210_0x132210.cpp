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

// Function: sub_00132210
// Address: 0x132210 - 0x132290
void sub_00132210_0x132210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132210_0x132210");
#endif

    switch (ctx->pc) {
        case 0x132230u: goto label_132230;
        case 0x132250u: goto label_132250;
        default: break;
    }

    ctx->pc = 0x132210u;

    // 0x132210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13221c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13221cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132220: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x132220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x132224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132228: 0xc049e80  jal         func_127A00
    ctx->pc = 0x132228u;
    SET_GPR_U32(ctx, 31, 0x132230u);
    ctx->pc = 0x13222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132228u;
    // 0x13222c: 0x24a545b0  addiu       $a1, $a1, 0x45B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A00u, 0x132228u, 0x132230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132230u;
label_132230:
    // 0x132230: 0x92060008  lbu         $a2, 0x8($s0)
    ctx->pc = 0x132230u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x132234: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x132234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x132238: 0x92070009  lbu         $a3, 0x9($s0)
    ctx->pc = 0x132238u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x13223c: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x13223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x132240: 0x9208000a  lbu         $t0, 0xA($s0)
    ctx->pc = 0x132240u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x132244: 0x9209000b  lbu         $t1, 0xB($s0)
    ctx->pc = 0x132244u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x132248: 0xc052324  jal         func_148C90
    ctx->pc = 0x132248u;
    SET_GPR_U32(ctx, 31, 0x132250u);
    ctx->pc = 0x13224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132248u;
    // 0x13224c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148C90u, 0x132248u, 0x132250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132250u;
label_132250:
    // 0x132250: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x132250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132254: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x132254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x132258: 0xe420f9a8  swc1        $f0, -0x658($at)
    ctx->pc = 0x132258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6AF9A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6AF9A8u, _value); } while (0); }
    // 0x13225c: 0x9204000d  lbu         $a0, 0xD($s0)
    ctx->pc = 0x13225cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x132260: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x132260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x132264: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x132264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x132268: 0x9205000c  lbu         $a1, 0xC($s0)
    ctx->pc = 0x132268u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13226c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x13226cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x132270: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x132270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x132274: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x132274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x132278: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x132278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13227c: 0xac23f9a0  sw          $v1, -0x660($at)
    ctx->pc = 0x13227cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965664), GPR_U32(ctx, 3));
    // 0x132280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132288: 0x3e00008  jr          $ra
    ctx->pc = 0x132288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132288u;
        // 0x13228c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132290u;
}
