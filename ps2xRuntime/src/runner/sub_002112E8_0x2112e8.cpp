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

// Function: sub_002112E8
// Address: 0x2112e8 - 0x21138c
void sub_002112E8_0x2112e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002112E8_0x2112e8");
#endif

    switch (ctx->pc) {
        case 0x211310u: goto label_211310;
        default: break;
    }

    ctx->pc = 0x2112e8u;

    // 0x2112e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2112e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2112ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2112ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112f0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2112f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2112f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2112f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2112fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2112fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211300: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x211300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211304: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x211304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x211308: 0xc0844e4  jal         func_211390
    ctx->pc = 0x211308u;
    SET_GPR_U32(ctx, 31, 0x211310u);
    ctx->pc = 0x21130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211308u;
    // 0x21130c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211390u, 0x211308u, 0x211310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211310u;
label_211310:
    // 0x211310: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x211310u;
    {
        const bool branch_taken_0x211310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211310u;
        // 0x211314: 0x93a40006  lbu         $a0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211310) {
            ctx->pc = 0x21137Cu;
            goto label_21137c;
        }
    }
    ctx->pc = 0x211318u;
    // 0x211318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21131c: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x21131cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x211320: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x211320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x211324: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x211324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x211328: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x211328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x21132c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x211330: 0x906387e0  lbu         $v1, -0x7820($v1)
    ctx->pc = 0x211330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294936544)));
    // 0x211334: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x211334u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x211338: 0xa2030028  sb          $v1, 0x28($s0)
    ctx->pc = 0x211338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x21133c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x21133cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x211340: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x211340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x211344: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x211344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x211348: 0x8c8487f0  lw          $a0, -0x7810($a0)
    ctx->pc = 0x211348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936560)));
    // 0x21134c: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x21134cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x211350: 0x24679fb0  addiu       $a3, $v1, -0x6050
    ctx->pc = 0x211350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942640));
    // 0x211354: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x211354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x211358: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x211358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x21135c: 0x83a50008  lb          $a1, 0x8($sp)
    ctx->pc = 0x21135cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211360: 0x83a60009  lb          $a2, 0x9($sp)
    ctx->pc = 0x211360u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
    // 0x211364: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x211364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x211368: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x211368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21136c: 0xa0e50008  sb          $a1, 0x8($a3)
    ctx->pc = 0x21136cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4B9FB8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4B9FB8u, _value); } while (0);
    // 0x211370: 0xa0e60009  sb          $a2, 0x9($a3)
    ctx->pc = 0x211370u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4B9FB9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4B9FB9u, _value); } while (0);
    // 0x211374: 0x83a4000a  lb          $a0, 0xA($sp)
    ctx->pc = 0x211374u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x211378: 0xa0e4000a  sb          $a0, 0xA($a3)
    ctx->pc = 0x211378u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4B9FBAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4B9FBAu, _value); } while (0);
label_21137c:
    // 0x21137c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21137cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211380: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x211380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211384: 0x3e00008  jr          $ra
    ctx->pc = 0x211384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211384u;
        // 0x211388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21138Cu;
}
