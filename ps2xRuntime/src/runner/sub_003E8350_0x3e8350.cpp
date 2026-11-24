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

// Function: sub_003E8350
// Address: 0x3e8350 - 0x3e83d4
void sub_003E8350_0x3e8350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8350_0x3e8350");
#endif

    ctx->pc = 0x3e8350u;

    // 0x3e8350: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x3e8350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x3e8354: 0x24633456  addiu       $v1, $v1, 0x3456
    ctx->pc = 0x3e8354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13398));
    // 0x3e8358: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x3e8358u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x923456u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x923456u, _value); } while (0);
    // 0x3e835c: 0x8086000f  lb          $a2, 0xF($a0)
    ctx->pc = 0x3e835cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x3e8360: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x3e8360u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x923456u));
    // 0x3e8364: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3e8364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3e8368: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3e8368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x3e836c: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x3e836cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x923456u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x923456u, _value); } while (0);
    // 0x3e8370: 0x80860010  lb          $a2, 0x10($a0)
    ctx->pc = 0x3e8370u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3e8374: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x3e8374u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x923456u));
    // 0x3e8378: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x3e8378u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3e837c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3e837cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3e8380: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3e8380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x3e8384: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x3e8384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e8388: 0x80860011  lb          $a2, 0x11($a0)
    ctx->pc = 0x3e8388u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3e838c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x3e838cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8390: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x3e8390u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x3e8394: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3e8394u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3e8398: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3e8398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x3e839c: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x3e839cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e83a0: 0x80860012  lb          $a2, 0x12($a0)
    ctx->pc = 0x3e83a0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3e83a4: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x3e83a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e83a8: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x3e83a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x3e83ac: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3e83acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3e83b0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3e83b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x3e83b4: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x3e83b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e83b8: 0x80850013  lb          $a1, 0x13($a0)
    ctx->pc = 0x3e83b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x3e83bc: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x3e83bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e83c0: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x3e83c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x3e83c4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3e83c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3e83c8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3e83c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3e83cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E83CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E83CCu;
        // 0x3e83d0: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E83CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E83D4u;
}
