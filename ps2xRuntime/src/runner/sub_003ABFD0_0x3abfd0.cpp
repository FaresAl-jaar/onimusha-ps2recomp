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

// Function: sub_003ABFD0
// Address: 0x3abfd0 - 0x3ac310
void sub_003ABFD0_0x3abfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABFD0_0x3abfd0");
#endif

    switch (ctx->pc) {
        case 0x3ac118u: goto label_3ac118;
        case 0x3ac148u: goto label_3ac148;
        case 0x3ac178u: goto label_3ac178;
        case 0x3ac1a8u: goto label_3ac1a8;
        case 0x3ac1d8u: goto label_3ac1d8;
        case 0x3ac208u: goto label_3ac208;
        case 0x3ac238u: goto label_3ac238;
        case 0x3ac268u: goto label_3ac268;
        case 0x3ac2b0u: goto label_3ac2b0;
        default: break;
    }

    ctx->pc = 0x3abfd0u;

    // 0x3abfd0: 0x8c8307f0  lw          $v1, 0x7F0($a0)
    ctx->pc = 0x3abfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2032)));
    // 0x3abfd4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3abfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3abfd8: 0xac230fc0  sw          $v1, 0xFC0($at)
    ctx->pc = 0x3abfd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x810FC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x810FC0u, _value); } while (0);
    // 0x3abfdc: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3abfdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3abfe0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3abfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3abfe4: 0xa0236c10  sb          $v1, 0x6C10($at)
    ctx->pc = 0x3abfe4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6C10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C10u, _value); } while (0);
    // 0x3abfe8: 0x948307f4  lhu         $v1, 0x7F4($a0)
    ctx->pc = 0x3abfe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2036)));
    // 0x3abfec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3abfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3abff0: 0xa4830044  sh          $v1, 0x44($a0)
    ctx->pc = 0x3abff0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x3abff4: 0x94830044  lhu         $v1, 0x44($a0)
    ctx->pc = 0x3abff4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x3abff8: 0x28630063  slti        $v1, $v1, 0x63
    ctx->pc = 0x3abff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x3abffc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3ABFFCu;
    {
        const bool branch_taken_0x3abffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFFCu;
        // 0x3ac000: 0x24030063  addiu       $v1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abffc) {
            ctx->pc = 0x3AC008u;
            goto label_3ac008;
        }
    }
    ctx->pc = 0x3AC004u;
    // 0x3ac004: 0xa4830044  sh          $v1, 0x44($a0)
    ctx->pc = 0x3ac004u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 3));
label_3ac008:
    // 0x3ac008: 0x908b0800  lbu         $t3, 0x800($a0)
    ctx->pc = 0x3ac008u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2048)));
    // 0x3ac00c: 0x908a0801  lbu         $t2, 0x801($a0)
    ctx->pc = 0x3ac00cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2049)));
    // 0x3ac010: 0x3c0c0093  lui         $t4, 0x93
    ctx->pc = 0x3ac010u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)147 << 16));
    // 0x3ac014: 0x90890802  lbu         $t1, 0x802($a0)
    ctx->pc = 0x3ac014u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2050)));
    // 0x3ac018: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3ac018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3ac01c: 0x90880803  lbu         $t0, 0x803($a0)
    ctx->pc = 0x3ac01cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2051)));
    // 0x3ac020: 0x258c0740  addiu       $t4, $t4, 0x740
    ctx->pc = 0x3ac020u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1856));
    // 0x3ac024: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x3ac024u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x3ac028: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac02c: 0x24630760  addiu       $v1, $v1, 0x760
    ctx->pc = 0x3ac02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1888));
    // 0x3ac030: 0x24870840  addiu       $a3, $a0, 0x840
    ctx->pc = 0x3ac030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x3ac034: 0x24c60780  addiu       $a2, $a2, 0x780
    ctx->pc = 0x3ac034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1920));
    // 0x3ac038: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x3ac038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x3ac03c: 0xa18b0000  sb          $t3, 0x0($t4)
    ctx->pc = 0x3ac03cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x930740u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x930740u, _value); } while (0);
    // 0x3ac040: 0xa18a0001  sb          $t2, 0x1($t4)
    ctx->pc = 0x3ac040u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x930741u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x930741u, _value); } while (0);
    // 0x3ac044: 0xa1890002  sb          $t1, 0x2($t4)
    ctx->pc = 0x3ac044u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x930742u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x930742u, _value); } while (0);
    // 0x3ac048: 0xa1880003  sb          $t0, 0x3($t4)
    ctx->pc = 0x3ac048u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x930743u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x930743u, _value); } while (0);
    // 0x3ac04c: 0x8c880804  lw          $t0, 0x804($a0)
    ctx->pc = 0x3ac04cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x3ac050: 0xac280744  sw          $t0, 0x744($at)
    ctx->pc = 0x3ac050u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x930744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x930744u, _value); } while (0);
    // 0x3ac054: 0x94880808  lhu         $t0, 0x808($a0)
    ctx->pc = 0x3ac054u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2056)));
    // 0x3ac058: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac05c: 0xa4280748  sh          $t0, 0x748($at)
    ctx->pc = 0x3ac05cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x930748u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x930748u, _value); } while (0);
    // 0x3ac060: 0x9488080a  lhu         $t0, 0x80A($a0)
    ctx->pc = 0x3ac060u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2058)));
    // 0x3ac064: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac068: 0xa428074a  sh          $t0, 0x74A($at)
    ctx->pc = 0x3ac068u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x93074Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x93074Au, _value); } while (0);
    // 0x3ac06c: 0x9488080c  lhu         $t0, 0x80C($a0)
    ctx->pc = 0x3ac06cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2060)));
    // 0x3ac070: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac074: 0xa428074c  sh          $t0, 0x74C($at)
    ctx->pc = 0x3ac074u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x93074Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x93074Cu, _value); } while (0);
    // 0x3ac078: 0x9488080e  lhu         $t0, 0x80E($a0)
    ctx->pc = 0x3ac078u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2062)));
    // 0x3ac07c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac080: 0xa428074e  sh          $t0, 0x74E($at)
    ctx->pc = 0x3ac080u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x93074Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x93074Eu, _value); } while (0);
    // 0x3ac084: 0x94880810  lhu         $t0, 0x810($a0)
    ctx->pc = 0x3ac084u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2064)));
    // 0x3ac088: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac08c: 0xa4280750  sh          $t0, 0x750($at)
    ctx->pc = 0x3ac08cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x930750u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x930750u, _value); } while (0);
    // 0x3ac090: 0x94880812  lhu         $t0, 0x812($a0)
    ctx->pc = 0x3ac090u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2066)));
    // 0x3ac094: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac098: 0xa4280752  sh          $t0, 0x752($at)
    ctx->pc = 0x3ac098u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x930752u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x930752u, _value); } while (0);
    // 0x3ac09c: 0x90880814  lbu         $t0, 0x814($a0)
    ctx->pc = 0x3ac09cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2068)));
    // 0x3ac0a0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac0a4: 0xa0280754  sb          $t0, 0x754($at)
    ctx->pc = 0x3ac0a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x930754u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x930754u, _value); } while (0);
    // 0x3ac0a8: 0x90880815  lbu         $t0, 0x815($a0)
    ctx->pc = 0x3ac0a8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2069)));
    // 0x3ac0ac: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac0b0: 0xa0280755  sb          $t0, 0x755($at)
    ctx->pc = 0x3ac0b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x930755u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x930755u, _value); } while (0);
    // 0x3ac0b4: 0x94880816  lhu         $t0, 0x816($a0)
    ctx->pc = 0x3ac0b4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2070)));
    // 0x3ac0b8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac0bc: 0xa4280756  sh          $t0, 0x756($at)
    ctx->pc = 0x3ac0bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x930756u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x930756u, _value); } while (0);
    // 0x3ac0c0: 0x8c880818  lw          $t0, 0x818($a0)
    ctx->pc = 0x3ac0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2072)));
    // 0x3ac0c4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac0c8: 0xac280758  sw          $t0, 0x758($at)
    ctx->pc = 0x3ac0c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x930758u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x930758u, _value); } while (0);
    // 0x3ac0cc: 0x8c88081c  lw          $t0, 0x81C($a0)
    ctx->pc = 0x3ac0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2076)));
    // 0x3ac0d0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac0d4: 0xac28075c  sw          $t0, 0x75C($at)
    ctx->pc = 0x3ac0d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x93075Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x93075Cu, _value); } while (0);
    // 0x3ac0d8: 0xc4830820  lwc1        $f3, 0x820($a0)
    ctx->pc = 0x3ac0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ac0dc: 0xc4820824  lwc1        $f2, 0x824($a0)
    ctx->pc = 0x3ac0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ac0e0: 0xc4810828  lwc1        $f1, 0x828($a0)
    ctx->pc = 0x3ac0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ac0e4: 0xc480082c  lwc1        $f0, 0x82C($a0)
    ctx->pc = 0x3ac0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ac0e8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x3ac0e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x930760u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x930760u, _value); } while (0); }
    // 0x3ac0ec: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3ac0ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x930764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x930764u, _value); } while (0); }
    // 0x3ac0f0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3ac0f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x930768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x930768u, _value); } while (0); }
    // 0x3ac0f4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3ac0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x93076Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x93076Cu, _value); } while (0); }
    // 0x3ac0f8: 0xc4830830  lwc1        $f3, 0x830($a0)
    ctx->pc = 0x3ac0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ac0fc: 0xc4820834  lwc1        $f2, 0x834($a0)
    ctx->pc = 0x3ac0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ac100: 0xc4810838  lwc1        $f1, 0x838($a0)
    ctx->pc = 0x3ac100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ac104: 0xc480083c  lwc1        $f0, 0x83C($a0)
    ctx->pc = 0x3ac104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ac108: 0xe4630010  swc1        $f3, 0x10($v1)
    ctx->pc = 0x3ac108u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x930770u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x930770u, _value); } while (0); }
    // 0x3ac10c: 0xe4620014  swc1        $f2, 0x14($v1)
    ctx->pc = 0x3ac10cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x930774u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x930774u, _value); } while (0); }
    // 0x3ac110: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x3ac110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x930778u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x930778u, _value); } while (0); }
    // 0x3ac114: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x3ac114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x93077Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x93077Cu, _value); } while (0); }
label_3ac118:
    // 0x3ac118: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3ac118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ac11c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ac11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ac120: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3ac120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3ac124: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3ac124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3ac128: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3ac128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3ac12c: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AC12Cu;
    {
        const bool branch_taken_0x3ac12c = (GPR_S64(ctx, 5) > 0);
        if (branch_taken_0x3ac12c) {
            ctx->pc = 0x3AC118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac118;
        }
    }
    ctx->pc = 0x3AC134u;
    // 0x3ac134: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x3ac134u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x3ac138: 0x24880a34  addiu       $t0, $a0, 0xA34
    ctx->pc = 0x3ac138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2612));
    // 0x3ac13c: 0x24e70974  addiu       $a3, $a3, 0x974
    ctx->pc = 0x3ac13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2420));
    // 0x3ac140: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x3ac140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x3ac144: 0x0  nop
    ctx->pc = 0x3ac144u;
    // NOP
label_3ac148:
    // 0x3ac148: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3ac148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ac14c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3ac14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ac150: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3ac150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3ac154: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3ac154u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x3ac158: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3ac158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3ac15c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x3ac15cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x3ac160: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AC160u;
    {
        const bool branch_taken_0x3ac160 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x3AC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC160u;
        // 0x3ac164: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac160) {
            ctx->pc = 0x3AC148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac148;
        }
    }
    ctx->pc = 0x3AC168u;
    // 0x3ac168: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x3ac168u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x3ac16c: 0x24880bcc  addiu       $t0, $a0, 0xBCC
    ctx->pc = 0x3ac16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3020));
    // 0x3ac170: 0x24e70b0c  addiu       $a3, $a3, 0xB0C
    ctx->pc = 0x3ac170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2828));
    // 0x3ac174: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3ac174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3ac178:
    // 0x3ac178: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3ac178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ac17c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3ac17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ac180: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3ac180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3ac184: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3ac184u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x3ac188: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3ac188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3ac18c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x3ac18cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x3ac190: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AC190u;
    {
        const bool branch_taken_0x3ac190 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x3AC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC190u;
        // 0x3ac194: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac190) {
            ctx->pc = 0x3AC178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac178;
        }
    }
    ctx->pc = 0x3AC198u;
    // 0x3ac198: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x3ac198u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x3ac19c: 0x24880c5c  addiu       $t0, $a0, 0xC5C
    ctx->pc = 0x3ac19cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3164));
    // 0x3ac1a0: 0x24e70b9c  addiu       $a3, $a3, 0xB9C
    ctx->pc = 0x3ac1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2972));
    // 0x3ac1a4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3ac1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3ac1a8:
    // 0x3ac1a8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3ac1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ac1ac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3ac1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ac1b0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3ac1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3ac1b4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3ac1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x3ac1b8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3ac1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3ac1bc: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x3ac1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x3ac1c0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AC1C0u;
    {
        const bool branch_taken_0x3ac1c0 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x3AC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC1C0u;
        // 0x3ac1c4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac1c0) {
            ctx->pc = 0x3AC1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac1a8;
        }
    }
    ctx->pc = 0x3AC1C8u;
    // 0x3ac1c8: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x3ac1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x3ac1cc: 0x2487145c  addiu       $a3, $a0, 0x145C
    ctx->pc = 0x3ac1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 5212));
    // 0x3ac1d0: 0x24c6139c  addiu       $a2, $a2, 0x139C
    ctx->pc = 0x3ac1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5020));
    // 0x3ac1d4: 0x240508b5  addiu       $a1, $zero, 0x8B5
    ctx->pc = 0x3ac1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2229));
label_3ac1d8:
    // 0x3ac1d8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3ac1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ac1dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ac1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ac1e0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3ac1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3ac1e4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3ac1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3ac1e8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3ac1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3ac1ec: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AC1ECu;
    {
        const bool branch_taken_0x3ac1ec = (GPR_S64(ctx, 5) > 0);
        if (branch_taken_0x3ac1ec) {
            ctx->pc = 0x3AC1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac1d8;
        }
    }
    ctx->pc = 0x3AC1F4u;
    // 0x3ac1f4: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x3ac1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x3ac1f8: 0x24873730  addiu       $a3, $a0, 0x3730
    ctx->pc = 0x3ac1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 14128));
    // 0x3ac1fc: 0x24c63670  addiu       $a2, $a2, 0x3670
    ctx->pc = 0x3ac1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13936));
    // 0x3ac200: 0x240503a9  addiu       $a1, $zero, 0x3A9
    ctx->pc = 0x3ac200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 937));
    // 0x3ac204: 0x0  nop
    ctx->pc = 0x3ac204u;
    // NOP
label_3ac208:
    // 0x3ac208: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3ac208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ac20c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ac20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ac210: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3ac210u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3ac214: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3ac214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3ac218: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3ac218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3ac21c: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AC21Cu;
    {
        const bool branch_taken_0x3ac21c = (GPR_S64(ctx, 5) > 0);
        if (branch_taken_0x3ac21c) {
            ctx->pc = 0x3AC208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac208;
        }
    }
    ctx->pc = 0x3AC224u;
    // 0x3ac224: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x3ac224u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x3ac228: 0x248845d4  addiu       $t0, $a0, 0x45D4
    ctx->pc = 0x3ac228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 17876));
    // 0x3ac22c: 0x24e74514  addiu       $a3, $a3, 0x4514
    ctx->pc = 0x3ac22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17684));
    // 0x3ac230: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3ac230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ac234: 0x0  nop
    ctx->pc = 0x3ac234u;
    // NOP
label_3ac238:
    // 0x3ac238: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x3ac238u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ac23c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3ac23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ac240: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x3ac240u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3ac244: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3ac244u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ac248: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x3ac248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3ac24c: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x3ac24cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ac250: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AC250u;
    {
        const bool branch_taken_0x3ac250 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x3AC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC250u;
        // 0x3ac254: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac250) {
            ctx->pc = 0x3AC238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac238;
        }
    }
    ctx->pc = 0x3AC258u;
    // 0x3ac258: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x3ac258u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x3ac25c: 0x248845e4  addiu       $t0, $a0, 0x45E4
    ctx->pc = 0x3ac25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 17892));
    // 0x3ac260: 0x24e74524  addiu       $a3, $a3, 0x4524
    ctx->pc = 0x3ac260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17700));
    // 0x3ac264: 0x240603f0  addiu       $a2, $zero, 0x3F0
    ctx->pc = 0x3ac264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
label_3ac268:
    // 0x3ac268: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3ac268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ac26c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3ac26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ac270: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3ac270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3ac274: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3ac274u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x3ac278: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3ac278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3ac27c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x3ac27cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x3ac280: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AC280u;
    {
        const bool branch_taken_0x3ac280 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x3AC284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC280u;
        // 0x3ac284: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac280) {
            ctx->pc = 0x3AC268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac268;
        }
    }
    ctx->pc = 0x3AC288u;
    // 0x3ac288: 0x8c836564  lw          $v1, 0x6564($a0)
    ctx->pc = 0x3ac288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25956)));
    // 0x3ac28c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac290: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x3ac290u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x3ac294: 0x2488656c  addiu       $t0, $a0, 0x656C
    ctx->pc = 0x3ac294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 25964));
    // 0x3ac298: 0x24e764ac  addiu       $a3, $a3, 0x64AC
    ctx->pc = 0x3ac298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25772));
    // 0x3ac29c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3ac29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ac2a0: 0xac2364a4  sw          $v1, 0x64A4($at)
    ctx->pc = 0x3ac2a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9364A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9364A4u, _value); } while (0);
    // 0x3ac2a4: 0x8c836568  lw          $v1, 0x6568($a0)
    ctx->pc = 0x3ac2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25960)));
    // 0x3ac2a8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac2ac: 0xac2364a8  sw          $v1, 0x64A8($at)
    ctx->pc = 0x3ac2acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9364A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9364A8u, _value); } while (0);
label_3ac2b0:
    // 0x3ac2b0: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x3ac2b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ac2b4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3ac2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ac2b8: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x3ac2b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3ac2bc: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3ac2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ac2c0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x3ac2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3ac2c4: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x3ac2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ac2c8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AC2C8u;
    {
        const bool branch_taken_0x3ac2c8 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x3AC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC2C8u;
        // 0x3ac2cc: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac2c8) {
            ctx->pc = 0x3AC2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac2b0;
        }
    }
    ctx->pc = 0x3AC2D0u;
    // 0x3ac2d0: 0x908307f7  lbu         $v1, 0x7F7($a0)
    ctx->pc = 0x3ac2d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2039)));
    // 0x3ac2d4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ac2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ac2d8: 0xa083005a  sb          $v1, 0x5A($a0)
    ctx->pc = 0x3ac2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ac2dc: 0x9423074c  lhu         $v1, 0x74C($at)
    ctx->pc = 0x3ac2dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x93074Cu));
    // 0x3ac2e0: 0x38630181  xori        $v1, $v1, 0x181
    ctx->pc = 0x3ac2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)385);
    // 0x3ac2e4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3ac2e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ac2e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AC2E8u;
    {
        const bool branch_taken_0x3ac2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac2e8) {
            ctx->pc = 0x3AC308u;
            goto label_3ac308;
        }
    }
    ctx->pc = 0x3AC2F0u;
    // 0x3ac2f0: 0x9083005a  lbu         $v1, 0x5A($a0)
    ctx->pc = 0x3ac2f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x3ac2f4: 0x28610062  slti        $at, $v1, 0x62
    ctx->pc = 0x3ac2f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
    // 0x3ac2f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC2F8u;
    {
        const bool branch_taken_0x3ac2f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac2f8) {
            ctx->pc = 0x3AC308u;
            goto label_3ac308;
        }
    }
    ctx->pc = 0x3AC300u;
    // 0x3ac300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ac300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ac304: 0xa083005a  sb          $v1, 0x5A($a0)
    ctx->pc = 0x3ac304u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 3));
label_3ac308:
    // 0x3ac308: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC310u;
}
