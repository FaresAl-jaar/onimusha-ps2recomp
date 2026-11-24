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

// Function: sub_0035F470
// Address: 0x35f470 - 0x35f53c
void sub_0035F470_0x35f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F470_0x35f470");
#endif

    switch (ctx->pc) {
        case 0x35f524u: goto label_35f524;
        default: break;
    }

    ctx->pc = 0x35f470u;

    // 0x35f470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35f474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35f478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35f478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35f47c: 0x83828bc0  lb          $v0, -0x7440($gp)
    ctx->pc = 0x35f47cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937536)));
    // 0x35f480: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x35F480u;
    {
        const bool branch_taken_0x35f480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F480u;
        // 0x35f484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f480) {
            ctx->pc = 0x35F500u;
            goto label_35f500;
        }
    }
    ctx->pc = 0x35F488u;
    // 0x35f488: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35f488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35f48c: 0x3c080092  lui         $t0, 0x92
    ctx->pc = 0x35f48cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)146 << 16));
    // 0x35f490: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x35f490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
    // 0x35f494: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x35f494u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x35f498: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x35f498u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x65A2F0u));
    // 0x35f49c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x35f49cu;
    { uint32_t bits = FAST_READ32(0x65A2F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f4a0: 0x2508c0c0  addiu       $t0, $t0, -0x3F40
    ctx->pc = 0x35f4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951104));
    // 0x35f4a4: 0x3c050092  lui         $a1, 0x92
    ctx->pc = 0x35f4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)146 << 16));
    // 0x35f4a8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x35f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x35f4ac: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x35f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x35f4b0: 0x24c6a300  addiu       $a2, $a2, -0x5D00
    ctx->pc = 0x35f4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943488));
    // 0x35f4b4: 0x24a5c0cc  addiu       $a1, $a1, -0x3F34
    ctx->pc = 0x35f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951116));
    // 0x35f4b8: 0x2484a310  addiu       $a0, $a0, -0x5CF0
    ctx->pc = 0x35f4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943504));
    // 0x35f4bc: 0x2463c0d8  addiu       $v1, $v1, -0x3F28
    ctx->pc = 0x35f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951128));
    // 0x35f4c0: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x35f4c0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 7)); ps2TraceGuestWrite(rdram, 0x91C0C0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x91C0C0u, _value); } while (0);
    // 0x35f4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f4c8: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x35f4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x91C0C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91C0C8u, _value); } while (0); }
    // 0x35f4cc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x35f4ccu;
    { uint32_t bits = FAST_READ32(0x65A300u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35f4d0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x35f4d0u;
    { uint32_t bits = FAST_READ32(0x65A304u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f4d4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x35f4d4u;
    { uint32_t bits = FAST_READ32(0x65A308u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f4d8: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x35f4d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x91C0CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91C0CCu, _value); } while (0); }
    // 0x35f4dc: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x35f4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x91C0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91C0D0u, _value); } while (0); }
    // 0x35f4e0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x35f4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x91C0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91C0D4u, _value); } while (0); }
    // 0x35f4e4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x35f4e4u;
    { uint32_t bits = FAST_READ32(0x65A310u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35f4e8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x35f4e8u;
    { uint32_t bits = FAST_READ32(0x65A314u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f4ec: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x35f4ecu;
    { uint32_t bits = FAST_READ32(0x65A318u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f4f0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x35f4f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x91C0D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91C0D8u, _value); } while (0); }
    // 0x35f4f4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x35f4f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x91C0DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91C0DCu, _value); } while (0); }
    // 0x35f4f8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x35f4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x91C0E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91C0E0u, _value); } while (0); }
    // 0x35f4fc: 0xa3828bc0  sb          $v0, -0x7440($gp)
    ctx->pc = 0x35f4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937536), (uint8_t)GPR_U32(ctx, 2));
label_35f500:
    // 0x35f500: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x35f500u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35f504: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x35f504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x35f508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f50c: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x35f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x35f510: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x35f510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x35f514: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35f514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35f518: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35f518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35f51c: 0xc040250  jal         func_100940
    ctx->pc = 0x35F51Cu;
    SET_GPR_U32(ctx, 31, 0x35F524u);
    ctx->pc = 0x35F520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F51Cu;
    // 0x35f520: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x35F51Cu, 0x35F524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F524u;
label_35f524:
    // 0x35f524: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x35f524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x35f528: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35f528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f52c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f530: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35f530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35f534: 0x3e00008  jr          $ra
    ctx->pc = 0x35F534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F534u;
        // 0x35f538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F53Cu;
}
